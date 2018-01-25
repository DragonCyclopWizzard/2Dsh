#ifndef ANIMATION_HH
#define ANIMATION_HH

#include <SFML/Graphics.hpp>
#include <iostream>

class Animation {
  
  sf::IntRect frame_rect;
  sf::Vector2u number_of_frames;
  sf::Vector2u current_frame;

  float time_to_switch;
  float switch_time;

public:
  
};

#endif
