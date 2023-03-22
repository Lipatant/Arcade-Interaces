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
    void updateFrame(shared::Display &display, shared::Inputs const &inputs, \
        shared::Meta &) override { updateFrame(display, inputs); };
    void updateFrame(shared::Display &, shared::Inputs const &) override { };
    const std::string &getName() const final { return name; }
};
