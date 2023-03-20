/*
** EPITECH PROJECT, 2023
** Shared/Shapes.hpp
** File description:
** -
*/

#pragma once
#include <iostream>

namespace shared
{
namespace shapes
{
    using Type = std::string;

    const std::string NONE = "";
    const std::string SQUARE = "square";            // | [] |
    const std::string CIRCLE = "circle";            // | () |
    const std::string RHOMBUS = "rhombus";          // | <> |
    const std::string TRIANGLE_U = "triangleU";     // | /\ |
    const std::string TRIANGLE_D = "triangleD";     // | \/ |
    const std::string TRIANGLE_L = "triangleL";     // | <] |
    const std::string TRIANGLE_R = "triangleR";     // | [> |
    const std::string NONUNIFORM_RATIONAL_B_SPLINE = \
        "nonuniformRationalBSpline";
}
}
