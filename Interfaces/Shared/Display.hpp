/*
** EPITECH PROJECT, 2023
** Shared/Display.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include <vector>
#include "Shared/Colors.hpp"
#include "Shared/Position.hpp"
#include "Shared/Shapes.hpp"

namespace shared
{
    using DisplayScreenSize = PositionU;
    using DisplayObjectPosition = PositionI;

    using DisplayObjectSprite = struct {
        std::string filepath;
        shared::shapes::Type shape;
        shared::colors::Type mainColor;
        shared::colors::Type secondaryColor;
    };

    using DisplayedObject = struct {
        shared::DisplayObjectPosition position;
    };

    using Display = struct {
        shared::DisplayScreenSize screenSize;
        shared::colors::Type baseColor;
    };
}
