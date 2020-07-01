//
//  testState.h
//  PingPong
//
//  Created by Jasdip Sekhon on 6/30/20.
//  Copyright © 2020 Jasdip Sekhon. All rights reserved.
//

#ifndef mainMenu_h
#define mainMenu_h

#pragma once
#include "gameState.h"

class MainMenu: public TinyState
{
public:
    void Initialize(sf::RenderWindow* window);
    void Update(sf::RenderWindow* window);
    void Render(sf::RenderWindow* window);
    void Destroy(sf::RenderWindow* window);
    ~MainMenu();
private:
    sf::Font* font;
    sf::Text* title;
    sf::Text* play;
    sf::Text* quit;
    
    int selected;
    bool upKey, downKey;
};

#endif /* mainMenu_h */
