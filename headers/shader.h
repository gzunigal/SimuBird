#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <GL/glew.h>

class Shader{
public:
  Shader(const std::string& fileName);
  virtual ~Shader();

  void Bind();

private:
  static const unsigned int NUM_SHADERS = 2;

  GLuint m_program;
  GLuint m_shaders[NUM_SHADERS];

  std::string LoadShader(const std::string& fileName);
  void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
  GLuint CreateShader(const std::string& text, unsigned int type);
};

#endif