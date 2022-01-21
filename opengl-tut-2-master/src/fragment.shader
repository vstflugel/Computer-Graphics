#version 330 core
in vec3 ourCol;
out vec4 FragColor;
void main()
{
	FragColor = vec4(ourCol, 1.0);
}
