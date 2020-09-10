#pragma once

#include "ShaderType.h"

#include <GL/glew.h>

#include <string>

class Shader
{
public:
	Shader(ShaderType type, const std::string& source);
	~Shader();

	GLuint GetID() const;
	
private:
	void CheckCompilationStatus();
	
	GLuint m_ID;
};