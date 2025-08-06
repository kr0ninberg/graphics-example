#pragma once
#include <array>

#include "Point2D.h"
#include "Shape.h"

struct Rectangle final : Shape {

    Rectangle(std::array<Point2D, 2> _points) : points(_points) {}

    void draw(Renderer& r) {
        r.drawRectangle(points);
    }

private:
    std::array<Point2D, 2> points;
};