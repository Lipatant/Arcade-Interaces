/*
** EPITECH PROJECT, 2023
** Shared/Position.hpp
** File description:
** -
*/

#pragma once

namespace shared
{
    template <typename T>
    struct Position_s {
        T x;
        T y;
    };

    using PositionF = struct Position_s<float>;
    using PositionI = struct Position_s<int>;
    using PositionU = struct Position_s<unsigned int>;
}
