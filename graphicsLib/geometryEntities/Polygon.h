#pragma once
#include <vector>

#include "Point2D.h"
#include "Shape.h"

struct Polygon final : Shape {

    Polygon(std::vector<Point2D> _points) : points(_points) {}

    void draw(Renderer& r) {
        r.drawPolygon(points);
    }

private:
    std::vector<Point2D> points;
};