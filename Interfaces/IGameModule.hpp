/*
** EPITECH PROJECT, 2023
** IGameModule.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include <memory>

class IGameModule
{
public:
    virtual ~IGameModule() = default;
    /// @brief Returns the module's name
    virtual const std::string &getName() const = 0;
};

using GameModule = std::unique_ptr<IGameModule>;

template <typename T>
static GameModule createGameModule(void)
{
    return std::make_unique<T>();
}
