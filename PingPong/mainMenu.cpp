//
//  testState.cpp
//  PingPong
//
//  Created by Jasdip Sekhon on 6/30/20.
//  Copyright © 2020 Jasdip Sekhon. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "mainMenu.h"
using namespace std;

void MainMenu::Initialize(sf::RenderWindow* window)
{
    this->font = new sf::Font();
    this->font ->loadFromFile("font.ttf");
    this->title = new sf::Text("Ping Pong", *this->font, 128U);
}

void MainMenu::Update(sf::RenderWindow* window)
{
    
}

void MainMenu::Render(sf::RenderWindow* window)
{
    window->draw(*this->title);
}

void MainMenu::Destroy(sf::RenderWindow* window)
{
    delete this->font;
    delete this->title;
}

