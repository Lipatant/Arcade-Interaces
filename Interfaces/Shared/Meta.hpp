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
    using MetaScore = int;
    /// @brief Used by Menus to send loading infos to the Core.
    ///     Once something is read by the Core, it can reset the value to an
    ///     an empty std::string
    class Meta
    {
    private:
        std::string _loadGame = "";
        std::string _loadGrap = "";
        std::string _loadName = "";
        shared::MetaScore _score = 0;
    public:
        /// @brief Stores a game filepath inside the members
        /// @param game Filepath to the shared library
        void storeGame(std::string const &game) { _loadGame = game; }
        /// @brief Stores a graphical filepath inside the members
        /// @param graph Filepath to the shared library
        void storeGraphical(std::string const &graph) { _loadGrap = graph; }
        /// @brief Stores a player name inside the members
        /// @param name Player name
        void storeName(std::string const &name) { _loadName = name; }
        /// @brief Extracts the stored game filepath and ERASE IT
        /// @return The extracted filepath
        std::string const extractGame(void) \
            { std::string tmp = _loadGame; _loadGame = ""; return tmp; }
        /// @brief Stores a highscore inside the members
        /// @param score Value of the highscore
        void storeScore(shared::MetaScore const &score) { _score = score; }
        /// @brief Extracts the stored graphical filepath and ERASE IT
        /// @return The extracted filepath
        std::string const extractGraphical(void) \
            { std::string tmp = _loadGrap; _loadGrap = ""; return tmp; }
        /// @brief Extracts the stored player name and ERASE IT
        /// @return The extracted name
        std::string const extractName(void) \
            { std::string tmp = _loadName; _loadName = ""; return tmp; }
        /// @brief Extracts the stored highscore and ERASE IT
        /// @return The extracted highscore
        shared::MetaScore extractScore(void) \
            { shared::MetaScore tmp = _score; _score = 0; return tmp; }
    };
}
