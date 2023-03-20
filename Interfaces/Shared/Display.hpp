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

    struct DisplayObjectSprite_s {
        std::string filepath;
        std::string text;
        shared::shapes::Type shape;
        shared::colors::Type mainColor;
        shared::colors::Type secondaryColor;
    };
    using DisplayObjectSprite = struct DisplayObjectSprite_s;

    struct DisplayedObject_s {
        shared::DisplayObjectSprite sprite;
        shared::DisplayObjectPosition position;
    };
    using DisplayedObject = struct DisplayedObject_s;

    struct Display_s {
        // Size of the screen (in tiles)
        shared::DisplayScreenSize screenSize;
        // Base color of the screen
        shared::colors::Type baseColor;
        // List of the different objects
        std::vector<DisplayedObject> list;
    };
    using Display = struct Display_s;
}
