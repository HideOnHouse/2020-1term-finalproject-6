//
// Created by FURO on 2020-05-16.
//

#ifndef SNAKEPRACTICE_SNAKE_H
#define SNAKEPRACTICE_SNAKE_H

#include <vector>
#include <cstdlib>
#include <iostream>
#include <cstring>
struct snakePart {
    int x, y;

    snakePart(int col, int row);

    snakePart();
};

class SnakeClass {
    int score;
    int snakeLength, cntGate;
    int points, tick, maxWidth, maxHeight;
    char direction, snakeHeadChar, snakeBodyChar, wallChar, immuneWallChar, growthItemChar, poisonItemChar;
    char scoreBoardChar[100];
    bool getGrowth, getPoison;
    snakePart growthItem;
    snakePart poisonItem;
    std::vector<snakePart> snake;

    void initBoard();
    void displayScore();
    bool checkScore();
    void putGrowth();
    void putPoison();
    bool collision();
    void moveSnake();

public:
    SnakeClass();

    ~SnakeClass();

    void start();
};


#endif //SNAKEPRACTICE_SNAKE_H
