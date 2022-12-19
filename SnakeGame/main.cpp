#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

bool gameover;
const int width = 20;
const int height = 20;
int tailx[100],taily[100];
int ntail;
int x, y, fruitx, fruity, score;
enum eDirection { stop = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup(){
    gameover = false;
    dir = stop;
    x = width/2;
    y = height/2;
    fruitx = rand()% (width-1);
    fruity = rand()% (height-1);
    score = 0;
}

void Draw(){
    system("cls");
    for(int i = 0; i <= width; i++){
        for (int j = 0; j <= height; j++){
            if (i==0 || i==20 || j == 0 || j == 20){
                cout << "#";
            }
            else {
                cout << " ";
            }
            if (i==y && j==x){
                cout << "T";
            }
            else if (i == fruity && j == fruitx){
                cout << "O";
            }
            else {
                bool print = false;
                for (int k = 0; k <ntail; k++){
                    if (tailx[k] == j && taily[k] == i){
                        cout << "v";
                        print = true;
                    }
                }
                if(!print){
                        cout << " ";
                    }
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;

}

void Input(){
    if(_kbhit()){
        switch (_getch()){
        case 'w':
            dir = UP;
            break;
        case 'a':
            dir = LEFT;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'x':
            gameover = true;
            break;
        }
    }
}

void Logic(){
    int prevx = tailx[0];
    int prevy = taily[0];
    int prev2x, prev2y;
    for (int i = 1;i < ntail;i++){
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
        tailx[0] = x;
        taily[0] = y;
    }

    switch (dir){
    case UP:
        y--;
        break;
    case LEFT:
        x--;
        break;
    case  DOWN:
        y++;
        break;
    case RIGHT:
        x++;
        break;
    default:
        break;
    }
    if(x > width+1 || x < 0 || y > height+1 || y < 0){
        gameover = true;
        for (int i = 0;i < ntail;i++){
        if(tailx[i] == x && taily[i] == y){
            gameover == true;
        }
    }
    }
    if(x == fruitx & y == fruity){
        score+= 20;
        fruitx = rand()% (width-1);
        fruity = rand()% (height-1);
        ntail++;
    }
}

int main(){
    Setup();
    while (!gameover){
    Draw();
    Input();
    Logic();
    Sleep(50);
    }
}
