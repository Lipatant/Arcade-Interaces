/*
** EPITECH PROJECT, 2023
** IDisplayModule.hpp
** File description:
** -
*/

#include <iostream>
#include <memory>

class IDisplayModule
{
public:
    virtual ~IDisplayModule() = default;
    virtual const std::string &getName() const = 0;
};

using DisplayModule = std::unique_ptr<IDisplayModule>;

template <typename T>
static DisplayModule createDisplayModule(void)
{
    return std::make_unique<T>();
}
