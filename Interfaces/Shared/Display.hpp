/*
** EPITECH PROJECT, 2023
** Shared/Display.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include "Shared/Colors.hpp"
#include "Shared/Position.hpp"
#include "Shared/Shapes.hpp"

namespace shared
{
    using DisplayObjectPosition = PositionI;

    using DisplayObjectSprite = struct {
        std::string filepath;
        shared::Shapes shape;
    };

    using DisplayedObject = struct {
        shared::DisplayObjectPosition position;
    };

    using Display = struct {
    };
}
