#include <SFML/Graphics.hpp>
#include <iostream>
#include "./func/controls.hpp"

using namespace sf;
using namespace std;

void player1(RenderWindow& window, float yp1)
{
  RectangleShape player1(Vector2f(20, 200));
  player1.setPosition(80, 0);
  player1.setFillColor(Color::White);
  player1.move(0, yp1);
  window.draw(player1);
}


void player2(RenderWindow& window, float yp2)
{
  RectangleShape player2(Vector2f(20, 200));
  player2.setPosition(1100, 0);
  player2.setFillColor(Color::White);
  player2.move(0, yp2);
  window.draw(player2);
}
