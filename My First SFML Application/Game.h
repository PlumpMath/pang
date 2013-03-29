//
//  Game.h
//  My First SFML Application
//
//  Created by Ryan Jones on 3/28/13.
//  Copyright (c) 2013 Ryan Jones. All rights reserved.
//

#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Game
{
public:
    static void Start();
    
private:
    static bool IsExiting();
    static void GameLoop();
    
    enum GameState { Uninitialized, ShowingSplash, Paused,
            ShowingMenu, Playing, Exiting };
    
    static GameState _gameState;
    static sf::RenderWindow _mainWindow;
};