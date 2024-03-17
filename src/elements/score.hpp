#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int score1 = 0;
int score2 = 0;

void score(RenderWindow& window, float xp, float yp){
  

  if (xp <= 2 && yp >= -10 && yp <= 620)
    {
      score2 += 1;
    }
  if (xp >= 1157 && yp >= -10 && yp <= 650)
    {
      score1 += 1;
    }


  string scoreComplete = to_string(score1) + "|" + to_string(score2); 

  Font font;

  //error (en caso de no encontrar la fuente)
  if(!font.loadFromFile("./src/assets/slkscr.ttf")){
    cout << "error" <<endl;

    system("pause"); 
  }
 

  Text score;

  score.setFont(font);
  score.setString(scoreComplete);
  score.setCharacterSize(30);
  score.setPosition(575, 20);
  score.setFillColor(Color::White);

  window.draw(score);
}

int gameOver()
{
  if (score1 == 10)
  {
    cout << "gana el jugador 1" << endl;
    return 3;
  }
  if (score2 == 10)
  {
    cout << "gana el jugador 2" << endl;
    return 4;
  }
  else
  {
    return 0;
  }
}
