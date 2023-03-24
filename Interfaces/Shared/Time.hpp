/*
** EPITECH PROJECT, 2023
** Shared/Time.hpp
** File description:
** -
*/

#pragma once

namespace shared
{
    using Delta = double;

    inline shared::Delta secToDelta(shared::Delta const sec) \
        { return sec * 1000000; }
    inline shared::Delta secToDelta(void) { return shared::secToDelta(1); }
}
