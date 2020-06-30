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
#define SCREEN_WIDTH 2048
#define SCREEN_HEIGHT 2048
using namespace std;
int main()
{
    /// This constructor creates the window with the size and pixel
    /// depth defined in \a mode
    
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Awesome Game", sf::Style::Resize | sf::Style::Close);
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
        window.clear();
        window.display();
    }
    
    return 0;
}
