#include "shader.h"
#include "../ew/external/glad.h"

namespace ianLib
{
	std::string loadShaderSourceFromFile(const std::string& filePath)
	{
		std::ifstream fstream(filePath);

		if (!fstream.is_open())
		{
			printf("Failed to load file %s", filePath);
			return {};
		}
		std::stringstream buffer;
		buffer << fstream.rdbuf();
		return buffer.str();
	}

	std::string loadShaderSourceFromFile(const std::string& filePath) 
	{

	};
	unsigned int createShader(GLenum shaderType, const char* sourceCode) 
	{
		
	};
	unsigned int createShaderProgram(const char* vertexShaderSource, const char* fragmentShaderSource) 
	{
		
	};
	
	Shader::Shader(const std::string& vertexShader, const std::string& fragmentShader)
	{
		std::string vertexShaderSource = loadShaderSourceFromFile(vertexShader.c_str());
		std::string fragmentShaderSource = loadShaderSourceFromFile(fragmentShader.c_str());
		m_id = createShaderProgram(vertexShaderSource.c_str(), fragmentShaderSource.c_str());
	}

	void Shader::use()
	{
		glUseProgram(m_id);
	}

	void Shader::setInt(const std::string& name, int v) const
	{
		glUniform1i(glGetUniformLocation(m_id, name.c_str()), v);
	}

	void Shader::setFloat(const std::string& name, float v) const
	{
		glUniform1f(glGetUniformLocation(m_id, name.c_str()), v);
	}


}