#pragma once
#include <SFML/Graphics/Color.hpp>

#include "../renderer/Renderer.h"

struct DrawableI {
    virtual void draw(Renderer& r) = 0;
};

struct Shape : DrawableI{
};