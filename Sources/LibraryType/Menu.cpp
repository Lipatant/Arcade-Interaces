/*
** EPITECH PROJECT, 2023
** LibraryType/Menu.cpp
** File description:
** -
*/

#include "Shared/LibraryType.hpp"

extern "C" shared::librarytype::Type getInformations(void)
{
    shared::librarytype::Type informations;

    informations.type = shared::librarytype::type::GAME;
    informations.isInvisible = true;
    return informations;
}
