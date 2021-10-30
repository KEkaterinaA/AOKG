#pragma once
#include<windows.h>
#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include"GL/freeglut.h"
#include"math.h"
#include"GLM/GLM/glm.hpp"
#include"GLM/GLM/gtx/transform.hpp"
#include"GLM/GLM/gtc/type_ptr.hpp"

using namespace glm;
// КЛАСС ДЛЯ ПРЕДСТАВЛЕНИЯ ОДНОГО ГРАФИЧЕСКОГО ОБЪЕКТА
class GraphicObject{
private:
	// Позиция и угол поворота для объекта
	//Glfloat position[3];
	vec3 position;
	GLfloat angle;
	// Матрица модели (расположение объекта) ‐ чтоб не вычислять каждый раз
	//Glfloat modelMatrix[16];
	mat4 modelMatrix;
	// Цвет модели
	//Glfloat color[3];
	vec3 color;
public:
	// Конструктор
	GraphicObject(void);
	// Задать позицию объекта
	void setPosition(float x, float y, float z);
	// Задать угол поворота в градусах относительно оси OY
	void setAngle(float a);
	// Задать цвет модели
	void setСolor(float r, float g, float b);
	// Вывести объект
	void draw(void);
};
