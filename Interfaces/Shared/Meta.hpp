/*
** EPITECH PROJECT, 2023
** Shared/Meta.hpp
** File description:
** -
*/

#pragma once
#include <iostream>

namespace shared
{
    /// @brief Used by Menus to send loading infos to the Core.
    ///     Once something is read by the Core, it can reset the value to an
    ///     an empty std::string
    class Meta
    {
    private:
        std::string _loadGame = "";
        std::string _loadGrap = "";
    public:
        /// @brief Stores a game filepath inside the members
        /// @param game Filepath to the shared library
        void storeGame(std::string const &game) { _loadGame = game; }
        /// @brief Stores a graphical filepath inside the members
        /// @param graph Filepath to the shared library
        void storeGraphical(std::string const &graph) { _loadGrap = graph; }
        /// @brief Extracts the stored game filepath and ERASE IT
        /// @return The extracted filepath
        std::string const extractGame(void) \
            { std::string tmp = _loadGame; _loadGame = ""; return tmp; }
        /// @brief Extracts the stored graphical filepath and ERASE IT
        /// @return The extracted filepath
        std::string const extractGraphical(void) \
            { std::string tmp = _loadGrap; _loadGrap = ""; return tmp; }
    };
}
