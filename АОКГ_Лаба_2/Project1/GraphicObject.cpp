#include "GraphicObject.h"
using namespace glm;

// Конструктор
GraphicObject::GraphicObject(void){}
// задать позицию объекта
void GraphicObject::setPosition(float x, float y, float z){
	position=vec3(x,y,z);
}
// задать угол поворота в градусах относительно оси OY
void GraphicObject::setAngle(float a){
	angle = a;
}
// Задать цвет модели
void GraphicObject::setСolor(float r, float g, float b){
	color=vec3(r,g,b);
}
// вывести объект
void GraphicObject::draw(void){
	glPushMatrix(); 
	glColor3fv(value_ptr(color));
	modelMatrix = translate(position) * rotate(radians(angle), vec3(0.0, 1.0, 0.0));
	glMultMatrixf(value_ptr(modelMatrix));
	glutWireTeapot(1.0);
	glPopMatrix();
}
