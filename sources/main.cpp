#include <iostream>
#include <GL/glew.h>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include "display.h"
#include "mesh.h"
#include "shader.h"

int main(int argc, char** argv){ 
  unsigned int N;
  float s, a, c;

  //getopt
  int ch;
  opterr = 0;

  if(argc <= 8){
    std::cerr << "Se deben ingresar opciones (uso: -N <numero de pajaros> -s <peso separacion> -a <peso aceleracion> -c <peso cohesion>)" << std::endl;
    exit(1);
  }

  while((ch = getopt(argc, argv, "N:s:a:c:")) != -1){
	switch (ch) {
		case 'N':
			N = atoi(optarg);
			break;
		case 's':
			s = atof(optarg);
			break;
		case 'a':
			a = atof(optarg);
			break;
      		case 'c':
			c = atof(optarg);
			break;
		case '?':
			if(optopt == 'N'){
				std::cerr << "Opcion -N requiere un argumento." << std::endl;
			}
			else if(optopt == 's'){
				std::cerr << "Opcion -s requiere un argumento." << std::endl;
			}
			else if(optopt == 'a'){
				std::cerr << "Opcion -a requiere un argumento." << std::endl;
			}
        		else if(optopt == 'c'){
				std::cerr << "Opcion -c requiere un argumento." << std::endl;
			}
			else if (isprint(optopt)) {
			        std::cerr << "Opcion -" << (char)optopt << " desconocida." << std::endl;
			}
			else{
				std::cerr << "Opcion desconocida." << std::endl;
			}
			exit(1);
		default:
			abort();
	}
  }

  //Diplay with OpenGL
  Display display(640, 360, "SimuBird");

  Shader shader("./resources/ShaderFile");

  unsigned int numVertices = N*3;
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
