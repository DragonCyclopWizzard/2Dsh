#ifndef COLLISION_HH
#define COLLISION_HH

#include <SFML/Graphics.hpp>
#include <iostream>

class Collision{

    sf::Sprite& sprite;

public:
    Collision(sf::Sprite& sprite);
};

#endif
