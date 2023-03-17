/*
** EPITECH PROJECT, 2023
** AGameModule.hpp
** File description:
** -
*/

#pragma once
#include "IGameModule.hpp"

class AGameModule : public IGameModule
{
protected:
    std::string name = "Unknown";
public:
    const std::string &getName() const final { return name; }
};
