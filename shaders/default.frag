#version 430 core
out vec4 FragColor; 

in vec3 color;

uniform vec3 farbe;

void main()
{
	FragColor = vec4(farbe, 1.0f);
}