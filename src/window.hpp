#include <SFML/Graphics.hpp>
#include <iostream>
#include "./elements/ball.hpp"
#include "./elements/players.hpp"
#include "./elements/score.hpp"
#include "./elements/func/physics.hpp"
#include "./elements/menu.hpp"


using namespace sf;
using namespace std;

int window(){

  // Detalles sobre la ventana
  RenderWindow window(VideoMode(1200, 700), "Pong!");
  window.setVerticalSyncEnabled(true);

  //RectangleShape rec(Vector2f(20, 200));


  //float detec = 80;
  float xp = 600;
  float yp = 350;
  float x = 15;
  float y = 20;

  //player1
  float pasosU1 = 3;
  float pasosD1 = 3;
  float yp1 = 225;

  //player2 
  float pasosU2 = 3;
  float pasosD2 = 3;
  float yp2 = 225;

  //menu
  bool status = true;



  // ciclo de apertura de ventana
  while (window.isOpen())
  {
    Event event;
    while (window.pollEvent(event))
    {
        if (event.type == Event::Closed)
            window.close();
        if (Keyboard::isKeyPressed(Keyboard::Key::Enter))
        {
          status = false;
        }
    }
    window.clear(Color::Black); 

    //colicion pelota y jugadores
    if (xp <= 100 && xp >= 40 )
    {
      if (yp >= yp1 && yp <= yp1 + 200)
      {
        x = -x;
        y = -y;
      }
    }

    if (xp >= 1060 && xp <= 1120)
    {
      if (yp >= yp2 && yp <= yp2 + 200)
      {
        x = -x;
        y = -y;
      }
    }

    //cout << yp2 << endl;
    //rec.setPosition(1100, yp2);
    //rec.setFillColor(Color::Green);

    //movimiento de la pelota
    x = ballPhyX(x, xp);
    y = ballPhyY(y, yp);

    xp += x;
    yp += y;


    //colicion jugadores
    collP1(yp1, pasosU1, pasosD1);
    collP2(yp2, pasosU2, pasosD2);


    //movimiento jugadores
    yp1 = movep1y(yp1, pasosU1, pasosD1);
    yp2 = movep2y(yp2, pasosU2, pasosD2);

    

    //mostrar ventana
    window.clear();
    
    if (status)
    {
      menu(window);
    }

    if (!status)
    {
      // objetos a renderizar
      ball(window, xp, yp);
      player1(window, yp1);
      player2(window, yp2);
      score(window, xp, yp);
      //window.draw(rec);
    }
    

    window.display();

  }

  return 0;
}




