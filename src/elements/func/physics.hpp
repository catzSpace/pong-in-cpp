#include <SFML/Graphics.hpp>



using namespace sf;

float ballPhyX(float x, float xp)
{
  if (xp <= 0 || xp >= 1160)
  {
    x = -x;
  }

  return x;
  
} 

float ballPhyY(float y, float yp)
{
  if (yp <= 0 || yp >= 660 )
  {
    y = -y;
  }

  return y;

}


void collP1(float &yp1, float &pasosU1, float &pasosD1)
{
  //rango de colicion
    if (yp1 >= 1)
    {
      pasosU1 = 10;
      pasosD1 = 10;
    }

    if (yp1 <= 299 )
    {   
      pasosD1 = 10;
      pasosU1 = 10;
    }

    if (yp1 >= 500)
    {
      pasosD1 = 0;
    }

    if (yp1 <= 0)
    {
      pasosU1 = 0;
    }
 
}

void collP2(float &yp2, float &pasosU2, float &pasosD2)
{
  //rango de colicion
    if (yp2 <= 1)
    {
      pasosU2 = 10;
      pasosD2 = 10;
    }

    if (yp2 <= 450 )
    {
      pasosD2 = 10;
      pasosU2 = 10;
    }

    if (yp2 >= 505)
    {
      pasosD2 = 0;
    }

    if (yp2 <= 0)
    {
      pasosU2 = 0;
    }

}



