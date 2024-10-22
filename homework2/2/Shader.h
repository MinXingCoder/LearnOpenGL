#pragma once
#include <glad/glad.h>
#include <string>

class Shader
{
public:
	Shader(const char* vertexPath, const char* fragmentPath);

	// 使用/激活程序
	void use();

	// uniform 工具函数
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;

private:
	void checkCompileErrors(unsigned int shader, std::string type);

	// 程序 id
	unsigned int ID;
};

