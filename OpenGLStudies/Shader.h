#ifndef SHADER_H
#define SHADER_H
#pragma once

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
	public:
		//Shader program ID
		unsigned int ID;

		//Constructor reads and builds a shader
		Shader(const char* vertexPath, const char* fragmentPath);

		//Use and activate the shader
		void use();

		//Utility uniform function
		void setBool(const std::string &name, bool value) const;
		void setInt(const std::string &name, int value) const;
		void setFloat(const std::string &name, float value) const;
};

#endif // !SHADER_H



