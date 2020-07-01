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
    this->font->loadFromFile("font.ttf");
    
    this->title = new sf::Text("Ping Pong", *this->font, 256U);
    this->title->setOrigin(this->title->getGlobalBounds().width / 2, this->title->getGlobalBounds().height / 2);
    this->title->setPosition(window->getSize().x / 2, window->getSize().y / 8);
    
    this->play = new sf::Text("Play", *this->font, 128U);
    this->play->setOrigin(this->play->getGlobalBounds().width / 2, this->play->getGlobalBounds().height / 2);
    this->play->setPosition(window->getSize().x / 2, window->getSize().y / 2);
    
    this->quit = new sf::Text("Quit", *this->font, 128U);
    this->quit->setOrigin(this->quit->getGlobalBounds().width / 2, this->quit->getGlobalBounds().height / 2);
    this->quit->setPosition(window->getSize().x / 2, window->getSize().y / 2 + this->play->getGlobalBounds().height);
    
}

void MainMenu::Update(sf::RenderWindow* window)
{
    
}

void MainMenu::Render(sf::RenderWindow* window)
{
    window->draw(*this->title);
    window->draw(*this->play);
    window->draw(*this->quit);
}

void MainMenu::Destroy(sf::RenderWindow* window)
{
    delete this->font;
    delete this->title;
}

