//
//  game_state.h
//  PingPong
//
//  Created by Jasdip Sekhon on 6/30/20.
//  Copyright © 2020 Jasdip Sekhon. All rights reserved.
//

#ifndef game_state_h
#define game_state_h

#pragma once
#include <SFML/Graphics.hpp>

class TinyState
{
public:
    virtual void Initialize(sf::RenderWindow &window)
    {
    }
    
    virtual void Update(sf::RenderWindow &window)
    {
    }
    
    virtual void Render(sf::RenderWindow &window)
    {
    }
    
    virtual void Destroy(sf::RenderWindow &window)
    {
    }
};

class GameState
{
public:
    gameState()
    {
    }
    
    void setState(TinyState state)
    {
        
    }
private:
    TinyState* state;
};

#endif /* game_state_h */
