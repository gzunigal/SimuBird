#include <iostream>
#include <GL/glew.h>
#include <ctime>
#include <cstdlib>
#include "display.h"
#include "mesh.h"
#include "shader.h"

int main(){ 
  unsigned int birds = 100;

  Display display(640, 360, "SimuBird");

  Shader shader("./resources/ShaderFile");

  unsigned int numVertices = birds*3;
  Vertex vertices[numVertices];
  srand(time(NULL));
  float x, y;
  for(unsigned int i=0;i<numVertices;i+=3){
    x = ((float)(rand()*2)/(float)RAND_MAX);
    y = ((float)(rand()*2)/(float)RAND_MAX);
    vertices[i] = Vertex(glm::vec3(x-0.1f,y-0.15f,0));
    vertices[i+1] = Vertex(glm::vec3(x,y,0));
    vertices[i+2] = Vertex(glm::vec3(x+0.1f,y-0.15f,0));
  }

  Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));

  while(!display.IsClosed()){
    display.Clear(0.5f, 0.75f, 0.5f, 1.0f);

    shader.Bind();
    mesh.Draw();

    display.Update();
  }
  return 0;
}