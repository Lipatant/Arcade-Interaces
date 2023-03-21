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
    void updateInputs(shared::Inputs &) override { }
    void display(shared::Display const &) override { }
    //
    const std::string &getName() const final { return name; }
};
