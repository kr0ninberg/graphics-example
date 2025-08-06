#pragma once
#include <array>

#include "Point2D.h"
#include "Shape.h"

struct Triange final : Shape {

    Triange(std::array<Point2D, 3> _points) : points(_points) {}

    void draw(Renderer& r) {
        r.drawTriangle(points);
    }

private:
    std::array<Point2D, 3> points;
};
