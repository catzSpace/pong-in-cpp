#include <SFML/Graphics.hpp>
#include "iostream"


using namespace sf;
using namespace std;


void menu(RenderWindow& window)
{
  Font font;

  //error (en caso de no encontrar la fuente)
  if(!font.loadFromFile("./src/assets/slkscrb.ttf")){
    cout << "error" <<endl;

    system("pause"); 
  }


  Text titulo;

  titulo.setFont(font);
  titulo.setString("PonG!");
  titulo.setCharacterSize(80);
  titulo.setPosition(440, 260);
  titulo.setFillColor(Color::White);
  
  Text enter;
  enter.setFont(font);
  enter.setString("-Press Enter-");
  enter.setCharacterSize(17);
  enter.setPosition(520, 360);
  enter.setFillColor(Color::White);

  Text Autor;
  Autor.setFont(font);
  Autor.setString("CatzSpace");
  Autor.setCharacterSize(17);
  Autor.setPosition(20, 10);
  Autor.setFillColor(Color::White);


  window.draw(Autor);
  window.draw(titulo);
  window.draw(enter);
  
}
