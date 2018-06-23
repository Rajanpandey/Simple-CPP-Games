#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

bool gameover;
char target=227;
const auto width=20, height=20;

int X, Y, targetX, targetY, score, ntail;
int tailX[400], tailY[400];

enum direction {STOP=0, LEFT, RIGHT, UP, DOWN};
direction dir;

void setup(){
    gameover=false;
    dir=STOP;
    score=0;

    X=width/2;
    Y=height/2;
    targetX=rand()%width;
    targetY=rand()%height;
}

void draw(){
    system("cls"); //system("clear") on linux
    std::cout << "Press X to quit at anytime.\n\n";
    for(auto i=0; i<width+2; i++){
        std::cout << "#";
    }
    std::cout << "\n";

    for(auto i=0; i<height; i++){
        for(auto j=0; j<width; j++){
            if(j==0){
                std::cout << "#";
            }

            if(i==Y && j==X){
                std::cout << "O";
            }else if(i==targetY && j==targetX){
                std::cout << target;
            }else{
                bool print=false;
                for(auto k=0; k<ntail; k++){
                    if(tailX[k]==j && tailY[k]==i){
                        std::cout << "o";
                        print=true;
                    }
                }
                if(!print){
                    std::cout << " ";
                }
            }

            if(j==width-1){
                std::cout << "#";
            }
        }
        std::cout << "\n";
    }

    for(auto i=0; i<width+2; i++){
        std::cout << "#";
    }
    std::cout << "\nScore: " << score;
}

void input(){
    if(_kbhit()){
        switch(_getch()){
            case 'w':
                dir=UP;
                break;

            case 's':
                dir=DOWN;
                break;

            case 'a':
                dir=LEFT;
                break;

            case 'd':
                dir=RIGHT;
                break;

            case 'x':
                gameover=true;
                break;
        }
    }
}

void logic(){
    int previousX=tailX[0];
    int previousY=tailY[0];
    int previous2X, previous2Y;
    tailX[0]=X;
    tailY[0]=Y;

    for(auto i=1; i<ntail; i++){
        previous2X=tailX[i];
        previous2Y=tailY[i];
        tailX[i]=previousX;
        tailY[i]=previousY;
        previousX=previous2X;
        previousY=previous2Y;
    }

    switch(dir){
        case UP:
            Y--;
            break;

        case DOWN:
            Y++;
            break;

        case LEFT:
            X--;
            break;

        case RIGHT:
            X++;
            break;

        default:
            break;
    }

    //Below is the statement to kill the game when snake hits the boundary wall
    if(X>width-1 || X<0 || Y>height-1 || Y<0){
        gameover=true;
    }
    /* Code for teleporting to the other side while walking through walls
    if(X>=width){
        X=0;
    }else if(X<0){
        X=width-1;
    }
    */

    if(Y>=height){
        Y=0;
    }else if(Y<0){
        Y=height-1;
    }

    for(auto i=0; i<ntail; i++){
        if(tailX[i]==X && tailY[i]==Y){
            gameover=true;
        }
    }

    if(X==targetX && Y==targetY){
        score++;
        ntail++;
        targetX=rand()%width;
        targetY=rand()%height;
    }
}

int main()
{
    srand (time(NULL));
    setup();
    while(!gameover){
        draw();
        input();
        logic();
        Sleep(150); //sleep(150) on linux
    }
     std::cout << "\nGAME OVER! :(";

     return 0;
}
