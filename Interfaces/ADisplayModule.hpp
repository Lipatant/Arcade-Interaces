/*
** EPITECH PROJECT, 2023
** ADisplayModule.hpp
** File description:
** -
*/

#pragma once
#include "IDisplayModule.hpp"

class ADisplayModule : public IDisplayModule
{
protected:
    std::string name = "Unknown";
public:
    int display() override { return 0; }
    //
    const std::string &getName() const final { return name; }
};
