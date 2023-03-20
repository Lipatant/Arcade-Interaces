/*
** EPITECH PROJECT, 2023
** Shared/Inputs.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include <map>
#include <time.h>

namespace shared
{
    namespace inputs
    {
        using Type = std::string;

        const std::string UP = "up";
        const std::string DOWN = "down";
        const std::string LEFT = "left";
        const std::string RIGHT = "right";
        const std::string A = "a";
        const std::string B = "b";
        const std::string SELECT = "select";
        const std::string START = "start";
        const std::string NEXT_LIBRARY = "next_library";
        const std::string NEXT_GAME = "next_game";
        const std::string RESTART = "restart";
        const std::string MENU = "menu";
        const std::string EXIT = "exit";

        enum class State
        {
            INACTIVE,   // not held
            PRESSED,    // has been held for less than 2 ticks
            HELD,       // held for more than 2 ticks
        };
    }

    using Delta = double;
    using InputsList = std::map<shared::inputs::Type, shared::inputs::State>;

    struct Inputs_s {
        shared::Delta delta;
        shared::InputsList list;
    };
    using Inputs = struct Inputs_s;
}
