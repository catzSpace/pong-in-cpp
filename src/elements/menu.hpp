#include <SFML/Graphics.hpp>
#include "iostream"
#include <string>


using namespace sf;
using namespace std;

void ComponentMenuCreator(RenderWindow& window, Text tittle, string str, int z, int x, int y)
{
  Font font;

  //error (en caso de no encontrar la fuente)
  if(!font.loadFromFile("./src/assets/slkscrb.ttf")){
    cout << "error" <<endl;

    system("pause"); 
  }


  tittle.setFont(font);
  tittle.setString(str);
  tittle.setCharacterSize(z);
  tittle.setPosition(x, y);
  tittle.setFillColor(Color::White);

  window.draw(tittle);
}

void menu(RenderWindow& window)
{
  
  // elementos
  Text titulo;
  Text enter;
  Text autor;
  Text version;

  //str
  string tx1 = "PonG!";
  string tx2 = "-Press Enter-";
  string tx3 = "catzspace";
  string tx4 = "1.1";

  //render
  ComponentMenuCreator(window, titulo, tx1, 80, 440, 260);
  ComponentMenuCreator(window, enter, tx2, 17, 520, 360);
  ComponentMenuCreator(window, autor, tx3, 17, 20, 17);
  ComponentMenuCreator(window, version, tx4, 17, 1140, 17);

  
}


