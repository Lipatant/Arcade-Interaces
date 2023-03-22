/*
** EPITECH PROJECT, 2023
** Shared/Inputs.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include <map>
#include <time.h>
#include "Shared/Time.hpp"

namespace shared
{
    namespace inputs
    {
        using Type = std::string;

        const std::string UP = "up";
        const std::string DOWN = "down";
        const std::string LEFT = "left";
        const std::string RIGHT = "right";
        const std::string A = "a";
        const std::string B = "b";
        const std::string SELECT = "select";
        const std::string START = "start";
        const std::string NEXT_LIBRARY = "next_library";
        const std::string NEXT_GAME = "next_game";
        const std::string RESTART = "restart";
        const std::string MENU = "menu";
        const std::string EXIT = "exit";

        enum class State
        {
            INACTIVE,   // not held
            PRESSED,    // has been held for less than 2 ticks
            HELD,       // held for more than 2 ticks
        };
    }

    using InputsList = std::map<shared::inputs::Type, shared::inputs::State>;
    using InputsOpenedList = std::map<shared::inputs::Type, bool>;

    class Inputs
    {
    private:
        shared::Delta _delta = 0;
        shared::InputsList _list;
        shared::InputsOpenedList _listOpened;
    public:
        shared::Delta &delta(void) { return _delta; }
        shared::Delta delta(void) const { return _delta; }
        shared::InputsList &list(void) { return _list; }
        shared::InputsList list(void) const { return _list; }
        shared::InputsOpenedList &listOpened(void) { return _listOpened; }
        shared::InputsOpenedList listOpened(void) const { return _listOpened; }
        //
        /// @brief Checks the state of an input
        shared::inputs::State operator[](shared::inputs::Type const &input) \
            const
        {
            if (_list.find(input) != _list.end())
                return _list.at(input);
            return shared::inputs::State::INACTIVE;
        }
        /// @brief Prepares the inputs
        void open(void)
        {
            for (auto const &[key, _] : _listOpened) _listOpened[key] = true;
        }
        /// @brief Closes the inputs, removing what is still opened
        void close(void)
        {
            for (auto const &[key, opened] : _listOpened) {
                if (!opened || isntPressed(key)) continue;
                _list[key] = shared::inputs::State::INACTIVE;
            }
        }
        /// @brief Adds an input to the lists
        void operator<<(shared::inputs::Type const &input)
        {
            if (_list.find(input) == _list.end()) {
                _list.insert({input, shared::inputs::State::PRESSED});
                _listOpened.insert({input, false});
            } else {
                _list[input] = (_list[input] == \
                    shared::inputs::State::INACTIVE ? \
                    shared::inputs::State::PRESSED : \
                    shared::inputs::State::HELD);
                _listOpened[input] = false;
            }
        }
        //
        bool isPressed(shared::inputs::Type const &input) const \
            { return (operator[](input) != shared::inputs::State::INACTIVE); }
        bool isntPressed(shared::inputs::Type const &input) const \
            { return (operator[](input) == shared::inputs::State::INACTIVE); }
        bool hasBeenPressed(shared::inputs::Type const &input) const \
            { return (operator[](input) == shared::inputs::State::PRESSED); }
    };
}
