#include <SFML/Graphics.hpp>
#include <iostream>


using namespace sf;



void ball(RenderWindow& window, float x, float y)
{
  // TODO añadir colición con los jugadores

  CircleShape ball;

  ball.setRadius(25);
  ball.setOrigin(0,0);
  ball.setPosition(0, 0);
  ball.setFillColor(Color::White);
  ball.move(x, y);
  window.draw(ball);



}

