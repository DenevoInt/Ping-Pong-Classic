#pragma once
#include<raylib.h>
#include<iostream>
#define Width 720
#define Height 480
class pong
{
private:
Texture2D Texture;
public:
float x, y, speed_x, speed_y, r;
//ball posX, posY, ball SpeedX, ball SpeedY;
 pong();
 ~pong();
 void ball(int x, int y, int r);
 void ScoreAudio();
 void ballMovement();
 int AIscore();
 int PLAYERscore();
 void Reset();
};


class paddleMovement : public pong{
private:
protected:
 void  limitMovement();
public:
 float x, y, width, height;
 int speed;
 void paddle(float x, float y, float width,float height);
 void update();
};

class CpuPuddle : public paddleMovement{
private:
public:
 void update(int ball_y);
};
