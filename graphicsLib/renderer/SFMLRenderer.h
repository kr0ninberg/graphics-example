#pragma once

#include <array>
#include <vector>
#include <SFML/Graphics.hpp>

#include "Renderer.h"

struct SFMLRenderer final : Renderer {

    explicit SFMLRenderer(uint width = 800, uint height = 600) :
        window(sf::VideoMode(width, height), "SFML Drawing") {
        window.setFramerateLimit(60);
    }

    void startMainLoop() override {
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear(sf::Color::White);
            for (auto&& shape : scene) {
                window.draw(*shape);
            }
            window.display();
        }
    }

    void drawCircle(float radius, Point2D center) override {
        auto c = std::make_unique<sf::CircleShape>(radius);
        c->setPosition(center.x - radius, center.y - radius);
        c->setFillColor(sf::Color::Green);

        scene.emplace_back(std::move(c));
    }

    void drawTriangle(std::array<Point2D, 3> points) override {
        auto tri = std::make_unique<sf::ConvexShape>();

        tri->setPointCount(3);
        tri->setPoint(0, {points[0].x, points[0].y});
        tri->setPoint(1, {points[1].x, points[1].y});
        tri->setPoint(2, {points[2].x, points[2].y});

        tri->setFillColor(sf::Color::Red);

        scene.emplace_back(std::move(tri));
    }

    void drawRectangle(std::array<Point2D, 2> points) override {
        const float width  = std::abs(points[1].x - points[0].x);
        const float height = std::abs(points[1].y - points[0].y);

        auto rect = std::make_unique<sf::RectangleShape>(sf::Vector2f(width, height));
        rect->setPosition(points[0].x, points[0].y);

        rect->setFillColor(sf::Color::Blue);

        scene.emplace_back(std::move(rect));
    }

    void drawPolygon(std::vector<Point2D> points) override {
        if (points.size() < 3) return;

        auto poly = std::make_unique<sf::ConvexShape>(points.size());
        for (std::size_t i = 0; i < points.size(); ++i)
            poly->setPoint(i, {points[i].x, points[i].y});

        poly->setFillColor(sf::Color::Cyan);

        scene.emplace_back(std::move(poly));
    }

private:
    sf::RenderWindow window;
    std::vector<std::unique_ptr<sf::Drawable>> scene;
};