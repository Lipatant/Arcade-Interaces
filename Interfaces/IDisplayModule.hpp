/*
** EPITECH PROJECT, 2023
** IDisplayModule.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include <memory>

class IDisplayModule
{
public:
    virtual ~IDisplayModule() = default;
    /// @brief Displays the screen
    /// @return 1, or 0 if the game has to be exited
    virtual int display() = 0;
    /// @brief Returns the module's name
    virtual const std::string &getName() const = 0;
};

using DisplayModule = std::unique_ptr<IDisplayModule>;

template <typename T>
static DisplayModule createDisplayModule(void)
{
    return std::make_unique<T>();
}
