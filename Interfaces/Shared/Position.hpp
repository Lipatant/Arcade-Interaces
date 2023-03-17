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
    using Position = struct {
        T x;
        T y;
    };

    using PositionF = Position<float>;
    using PositionI = Position<int>;
    using PositionU = Position<unsigned int>;
}
