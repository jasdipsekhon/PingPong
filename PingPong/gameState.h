//
//  game_state.h
//  PingPong
//
//  Created by Jasdip Sekhon on 6/30/20.
//  Copyright © 2020 Jasdip Sekhon. All rights reserved.
//

#ifndef gameState_h
#define gameState_h

#pragma once
#include <SFML/Graphics.hpp>

class TinyState
{
public:
    virtual void Initialize(sf::RenderWindow* window)
    {
    }
    
    virtual void Update(sf::RenderWindow* window)
    {
    }
    
    virtual void Render(sf::RenderWindow* window)
    {
    }
    
    virtual void Destroy(sf::RenderWindow* window)
    {
    }
    
    ~TinyState()
    {
    }
};

class GameState
{
public:
    GameState()
    {
        this->state = NULL;
    }
    
    ~GameState()
    {
        if (this->state != NULL)
        {
            this->state->Destroy(this->window);
        }
    }
    
    void setWindow(sf::RenderWindow &window)
    {
        this->window = &window;
    }
    
    // initalize tiny state with parameter state
    // if there is previous state, destroy the current state
    // reset current state
    void setState(TinyState* state)
    {
        if (this->state != NULL)
        {
            this->state->Destroy(this->window);
        }
        this->state = state;
        if (this-> state != NULL)
        {
            this->state->Initialize(this->window);
        }
    }
    
    void Update()
    {
        if (this->state != NULL)
        {
            this->state->Update(this->window);
        }
    }
    
    void Render()
    {
        if (this->state != NULL)
        {
            this->state->Render(this->window);
        }
    }
    
private:
    TinyState* state;
    sf::RenderWindow* window;
};

extern GameState coreState;
#endif /* gameState_h */
