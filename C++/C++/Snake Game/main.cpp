#include <iostream>
#include <conio.h>

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;

enum eDirection{STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw(){

    system("cls");
    for (int i = 0; i < width+2; i++)
        std::cout << "#";
    std::cout << std::endl;

    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (j == 0)
                std::cout << "#";
            if(i == y && j == x)
              std::cout << "O";
            else if(i == fruitY && j == fruitX)
              std::cout << "F";
            else
              std::cout << " ";
            if (j == width - 1)
                std::cout << "#";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < width+2; i++)
        std::cout << "#";
    std::cout << std::endl;
    std::cout << "Score: " << score << std::endl;
}

void Input(){
  if(_kbhit()){
    switch (_getch()) {
      case 'a':
        dir = LEFT;
        break;
      case 'd':
        dir = RIGHT;
        break;
      case 'w':
        dir = UP;
        break;
      case 's':
        dir = DOWN;
        break;
      case 'x':
        gameOver = true;
        break;
    }
  }
}

void Logic(){
  switch (dir) {
    case LEFT:
      x--;
      break;
    case RIGHT:
      x++;
      break;
    case UP:
      y--;
      break;
    case DOWN:
      y++;
      break;
    default:
      break;
  }
  if(x > width || x < 0 || y > height || y < 0)
    gameOver = true;
  if(x == fruitX && y == fruitY){
    score += 10;
    fruitX = rand() % width;
    fruitY = rand() % height;
  }
}

int main(){
    Setup();
    while (!gameOver){
        Draw();
        Input();
        Logic();
    }

    return 0;
}
