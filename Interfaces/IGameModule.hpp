/*
** EPITECH PROJECT, 2023
** IGameModule.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include <memory>
#include "Shared/Display.hpp"
#include "Shared/Inputs.hpp"
#include "Shared/Meta.hpp"

class IGameModule
{
public:
    virtual ~IGameModule() = default;
    /// @brief Updates the game, based on the Delta contained inside inputs.
    /// @param display Data sent to the Display
    /// @param inputs Inputs got from the Display
    /// @param meta (optional) Used by menus to send infos to the core
    virtual void updateFrame(shared::Display &display, shared::Inputs \
        const &inputs, shared::Meta &meta) = 0;
    /// @brief Updates the game, based on the Delta contained inside inputs.
    /// @param display Data sent to the Display
    /// @param inputs Inputs got from the Display
    /// @param meta (optional) Used by menus to send infos to the core
    virtual void updateFrame(shared::Display &display, shared::Inputs \
        const &inputs) = 0;
    /// @brief Returns the module's name
    virtual const std::string &getName() const = 0;
};

using GameModule = std::unique_ptr<IGameModule>;

template <typename T>
static GameModule createGameModule(void)
{
    return std::make_unique<T>();
}
