/*
** EPITECH PROJECT, 2023
** LibraryType/Game.cpp
** File description:
** -
*/

#include "Shared/LibraryType.hpp"

extern "C" shared::librarytype::Type getInformations(void)
{
    shared::librarytype::Type informations;

    informations.type = shared::librarytype::type::GAME;
    informations.isInvisible = false;
    return informations;
}
