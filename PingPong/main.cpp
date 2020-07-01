//
//  main.cpp
//  PingPong
//
//  Created by Jasdip Sekhon on 6/28/20.
//  Copyright © 2020 Jasdip Sekhon. All rights reserved.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "gameState.h"
#include "mainMenu.h"
//#include "mainMenu.cpp"

#define SCREEN_WIDTH 2048
#define SCREEN_HEIGHT 2048
using namespace std;

GameState coreState;
bool quitGame = false;
int main()
{
    /// This constructor creates the window with the size and pixel
    /// depth defined in \a mode
    
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Ping Pong", sf::Style::Resize | sf::Style::Close);
    
    coreState.setWindow(window);
    coreState.setState(new MainMenu());
    
    window.setFramerateLimit(60);
    sf::CircleShape(100.f);
    //shape.setFillColor(sf::Color::Green);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                
                default:
                    break;
            }
        
        }
        window.clear(sf::Color::Black);
        
        
        coreState.Update();
        coreState.Render();
        
        window.display();
        
        if (quitGame)
        {
            window.close();
        }
    }
    
    return 0;
}
