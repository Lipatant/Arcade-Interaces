/*
** EPITECH PROJECT, 2023
** Shared/LibraryType.hpp
** File description:
** -
*/

#pragma once
#include <iostream>

namespace shared
{
namespace librarytype
{
    namespace type
    {
        using Type = std::string;

        const std::string GAME = "game";
        const std::string GRAPHICAL = "graphical";
    }

    using Type = struct {
        shared::librarytype::type::Type type;
        bool isInvisible;
    };
}
}
