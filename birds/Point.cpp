#include <iostream>
#include <GL/glew.h>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <math.h>
#include "Point.h"



Point::Point(float x, float y):x(x), y(y){};
Point::Point(){
  x = ((float)(rand()*2)/(float)RAND_MAX);
  y = ((float)(rand()*2)/(float)RAND_MAX);
};

Point Point::operator+(Point p){
  return Point(x+p.x, y+p.y);
};

Point Point::operator-(Point p){
  return Point(x-p.x, y-p.y);
};

Point Point::operator/(float a){
  return Point(x/a, y/a);
};

float Point::dist(Point p){
  return sqrt(pow(x,p.x)+pow(y,p.y));
};

float Point::mod(){
  return sqrt(pow(x,x)+pow(y,y));
};