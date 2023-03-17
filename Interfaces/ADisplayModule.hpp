/*
** EPITECH PROJECT, 2023
** ADisplayModule.hpp
** File description:
** -
*/

#include "IDisplayModule.hpp"

class ADisplayModule : public IDisplayModule
{
protected:
    std::string name = "Unknown";
public:
    const std::string &getName() const final { return name; }
};
