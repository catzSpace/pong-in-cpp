#include <SFML/Graphics.hpp>


using namespace sf;

float movep1y(float yp1, float pasosU1, float pasosD1)
{
  if(Keyboard::isKeyPressed(Keyboard::Key::E))
  {
    yp1 -= pasosU1;
  }

  if(Keyboard::isKeyPressed(Keyboard::Key::D))
  {
    yp1 += pasosD1;
  }


  return yp1;
}

float movep2y(float yp2, float pasosU2, float pasosD2)
{
  if(Keyboard::isKeyPressed(Keyboard::Key::U))
  {
    yp2 -= pasosU2;
  }

  if(Keyboard::isKeyPressed(Keyboard::Key::J))
  {
    yp2 += pasosD2;
  }


  return yp2;
}
