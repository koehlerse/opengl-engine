#ifndef VAO_CLASS_H
#define VAO_CLASS_H

#include<glad/gl.h>
#include<VBO.h>

class VAO
{
	public:
		GLuint ID;
		VAO();

		void LinkVBO(VBO, GLuint layout);
		void Bind();
		void Unbind();
		void Delete();
};
#endif 

