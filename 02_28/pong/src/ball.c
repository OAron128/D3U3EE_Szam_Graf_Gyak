#include "ball.h"

#include <GL/gl.h>

#include <math.h>

void init_ball(Ball* ball, float x, float y)
{
    ball->x = x;
    ball->y = y;
    ball->radius = 10;
    ball->speed_x = 300;
    ball->speed_y = 300;
}

void update_ball(Ball* ball, double time)
{
    ball->x += ball->speed_x * time;
    ball->y += ball->speed_y * time;
}

void render_ball(Ball* ball)
{
    double angle;
    double x;
    double y;

    glPushMatrix();
    glTranslatef(ball->x, ball->y, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.9, 0.8);
    glVertex2f(0, 0);
    angle = 0;
    while (angle < 50.0 * M_PI + 1) {
        x = cos(angle) * ball->radius;
        y = sin(angle) * ball->radius;
        glVertex2f(x, y);
        angle += 0.8;
    }
    glEnd();
    glPopMatrix();
}
void toggle_ball(Ball* ball){
	angle = rand()/(float)RAND_MAX * MAXANGLE*2.0f - ball -> dy=sinf(angle)
}


void reset_ball(Ball* ball){
	ball -> x=ball -> within -> width/2 -PONG_BALL_SIZE/2.0f
	ball -> y=ball -> within -> height/2 - PONG_BALL_SIZE/2.0f
	toggle_ball(ball);
}


