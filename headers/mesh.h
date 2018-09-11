#ifndef MESH_H
#define MESH_H

#include <glm/glm.hpp>
#include <GL/glew.h>

class Vertex{
public:
  Vertex(){}
  Vertex(const glm::vec3& pos){
    this->pos = pos;
  }
private:
  glm::vec3 pos;
};

class Mesh{
public:
  Mesh(Vertex* vertices, unsigned int numVertices);
  virtual ~Mesh();

  void Draw();
private:
  
  enum{POSITION_VB, NUM_BUFFERS};

  GLuint m_vertexArrayObject; //warning
  GLuint m_vertexArrayBuffers[NUM_BUFFERS];
  unsigned int m_drawCount;
};

#endif