#pragma once

#include <array>
#include <vector>
#include <SFML/Graphics.hpp>

#include "Renderer.h"

struct SFMLRenderer final : Renderer {

    explicit SFMLRenderer(uint width = 800, uint height = 600) ;

    void startMainLoop() override ;

    void drawCircle(float radius, Point2D center) override ;

    void drawTriangle(std::array<Point2D, 3> points) override ;

    void drawRectangle(std::array<Point2D, 2> points) override ;

    void drawPolygon(std::vector<Point2D> points) override ;

private:
    sf::RenderWindow window;
    std::vector<std::unique_ptr<sf::Drawable>> scene;
};