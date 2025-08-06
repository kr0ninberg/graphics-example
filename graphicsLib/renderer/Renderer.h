#pragma once
#include <array>
#include <vector>

#include "../geometryEntities/Point2D.h"
#include "../geometryEntities/Shape.h"


struct Shape;

struct Renderer {
    virtual ~Renderer() = default;

    virtual void startMainLoop() = 0;

    virtual void drawCircle(float, Point2D) = 0;
    virtual void drawTriangle(std::array<Point2D, 3>) = 0;
    virtual void drawRectangle(std::array<Point2D, 2>) = 0;
    virtual void drawPolygon(std::vector<Point2D>) = 0;
};
