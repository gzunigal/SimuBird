#include <iostream>
#include <GL/glew.h>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <vector> 
#include <unistd.h>
#include <math.h>
#include "Bird.h"

using namespace std;

unsigned int Bird::cnt = 0;

Bird::Bird(float ws, float wc, float wa){
  this->ws=ws;
  this->wc=wc;
  this->wa=wa; 
  tid = ++cnt;
  vel = Point(0,0);
};


void Bird::main() {
  // Separacion

  /* 
  Point direction = (this->pos-p)/(this->pos-p).mod();
  Point repulsion = direction/this->pos.dist(p);

  Point Si; // calcular Si
  Si = Si/Si.mod()
  Si = V*Si;
  Si = Si - this->vel
  Si = min(Si,Fmax) // ver como sacar min 
  */

  // Cohesion
  


  osacquire( cout ) << tid << ": " << pos.x << " " << pos.y << endl;
};
