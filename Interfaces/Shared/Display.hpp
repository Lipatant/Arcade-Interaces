/*
** EPITECH PROJECT, 2023
** Shared/Display.hpp
** File description:
** -
*/

#pragma once
#include <iostream>
#include <vector>
#include "Shared/Colors.hpp"
#include "Shared/Position.hpp"
#include "Shared/Shapes.hpp"

namespace shared
{
    using DisplayScreenSize = PositionU;
    using DisplayObjectPosition = PositionI;
    using DisplayObjectSpriteOffset = PositionI;

    class DisplayObjectSprite
    {
    private:
        std::string _filepath = "";
        shared::DisplayObjectSpriteOffset _offset = {0, 0};
        std::string _text = "";
        bool _textAsSprite = false;
        shared::shapes::Type _shape = shared::shapes::NONE;
        shared::colors::Type _mainColor = shared::colors::NONE;
        shared::colors::Type _secondaryColor = shared::colors::NONE;
    public:
        // Filepath to the image
        std::string &filepath(void) { return _filepath; }
        std::string filepath(void) const { return _filepath; }
        // Needed when cropping an image to obtain different animations
        shared::DisplayObjectSpriteOffset &offset(void) { return _offset; }
        shared::DisplayObjectSpriteOffset offset(void) const \
            { return _offset; }
        // Text to display
        std::string &text(void) { return _text; }
        std::string text(void) const { return _text; }
        // If the text is used as a Sprite (display only if the sprite can't)
        bool &textAsSprite(void) { return _textAsSprite; }
        bool textAsSprite(void) const { return _textAsSprite; }
        // Shape used if there's no sprite to display
        shared::shapes::Type &shape(void) { return _shape; }
        shared::shapes::Type shape(void) const { return _shape; }
        // Colors
        shared::colors::Type &mainColor(void) { return _mainColor; }
        shared::colors::Type mainColor(void) const { return _mainColor; }
        shared::colors::Type &secondaryColor(void) { return _secondaryColor; }
        shared::colors::Type secondaryColor(void) const \
            { return _secondaryColor; }
    };

    class DisplayedObject
    {
    private:
        shared::DisplayObjectSprite _sprite;
        shared::DisplayObjectPosition _position;
    public:
        shared::DisplayObjectSprite &sprite(void) { return _sprite; }
        shared::DisplayObjectSprite sprite(void) const { return _sprite; }
        shared::DisplayObjectPosition &position(void) { return _position; }
        shared::DisplayObjectPosition position(void) const \
            { return _position; }
    };

    struct Display_s {
        // Size of the screen (in tiles)
        shared::DisplayScreenSize screenSize;
        // Base color of the screen
        shared::colors::Type baseColor;
        // List of the different objects
        std::vector<DisplayedObject> list;
    };
    using Display = struct Display_s;
}
