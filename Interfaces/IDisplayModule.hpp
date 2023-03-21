/*
** EPITECH PROJECT, 2023
** IDisplayModule.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include <memory>
#include "Shared/Display.hpp"
#include "Shared/Inputs.hpp"

class IDisplayModule
{
public:
    virtual ~IDisplayModule() = default;
    /// @brief Updates inputs
    virtual void updateInputs(shared::Inputs &inputs) = 0;
    /// @brief Displays the screen
    virtual void display(shared::Display const &displayed) = 0;
    /// @brief Returns the module's name
    virtual const std::string &getName() const = 0;
};

using DisplayModule = std::unique_ptr<IDisplayModule>;

template <typename T>
static DisplayModule createDisplayModule(void)
{
    return std::make_unique<T>();
}
