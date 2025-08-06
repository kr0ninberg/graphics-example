#pragma once
#include <array>
#include <vector>

#include "../geometryEntities/Point2D.h"
#include "../geometryEntities/Shape.h"


struct Shape;

struct Renderer {
    virtual ~Renderer() = default;

    virtual void startMainLoop() = 0;

    virtual void drawCircle(float, Point2D) = 0; // TODO fix incoming parameters
    virtual void drawTriangle(std::array<Point2D, 3>) = 0; // TODO fix incoming parameters
    virtual void drawRectangle(std::array<Point2D, 4>) = 0; // TODO fix incoming parameters
    virtual void drawPolygon(std::vector<Point2D>) = 0; // TODO fix incoming parameters
};
