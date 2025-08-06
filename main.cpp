#include <iostream>
#include <memory>

#include "graphicsLib/geometryEntities/Triangle.h"
#include "graphicsLib/geometryEntities/Circle.h"
#include "graphicsLib/geometryEntities/Polygon.h"
#include "graphicsLib/geometryEntities/Rectangle.h"

#include "graphicsLib/renderer/Renderer.h"
#include "graphicsLib/renderer/SFMLRenderer.h"

int main() {
    Renderer&& r = SFMLRenderer{};
    Triange{{Point2D{100.f, 100.f}, {200.f,  100.f}, {200.f, 200.f}}}.draw(r);
    Circle{50.f, {400.f, 400.f}}.draw(r);
    Rectangle{{Point2D{100.f, 300.f}, {200.f, 400.f}}}.draw(r);
    Polygon{{{400.f, 100.f},
            {500.f, 100.f},
            {550.f, 200.f},
            {450.f, 300.f},}}.draw(r);
    r.startMainLoop();
    return 0;
}
