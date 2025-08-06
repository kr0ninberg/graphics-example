#pragma once
#include <array>

#include "Point2D.h"
#include "Shape.h"

struct Circle final : Shape {

    Circle(float _radius, Point2D _center) : radius(_radius), center(_center) {}

    void draw(Renderer& r) {
        r.drawCircle(radius, center);
    }

private:
    float radius;
    Point2D center;
};