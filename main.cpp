#include <iostream>
#include <memory>

#include "graphicsLib/geometryEntities/Triangle.h"
#include "graphicsLib/renderer/Renderer.h"
#include "graphicsLib/renderer/SFMLRenderer.h"

int main() {
    Renderer&& r = SFMLRenderer{};
    Triange{{Point2D{100.f, 100.f}, {200.f,  100.f}, {200.f, 200.f}}}.draw(r);
    r.startMainLoop();
    return 0;
}
