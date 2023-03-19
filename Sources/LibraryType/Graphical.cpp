/*
** EPITECH PROJECT, 2023
** LibraryType/Graphical.cpp
** File description:
** -
*/

#include "Shared/LibraryType.hpp"

extern "C" shared::librarytype::Type getInformations(void)
{
    shared::librarytype::Type informations;

    informations.type = shared::librarytype::type::GRAPHICAL;
    informations.isInvisible = false;
    return informations;
}
