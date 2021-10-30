#include "GraphicObject.h"
using namespace glm;

// �����������
GraphicObject::GraphicObject(void){}
// ������ ������� �������
void GraphicObject::setPosition(float x, float y, float z){
	position=vec3(x,y,z);
}
// ������ ���� �������� � �������� ������������ ��� OY
void GraphicObject::setAngle(float a){
	angle = a;
}
// ������ ���� ������
void GraphicObject::set�olor(float r, float g, float b){
	color=vec3(r,g,b);
}
// ������� ������
void GraphicObject::draw(void){
	glPushMatrix(); 
	glColor3fv(value_ptr(color));
	modelMatrix = translate(position) * rotate(radians(angle), vec3(0.0, 1.0, 0.0));
	glMultMatrixf(value_ptr(modelMatrix));
	glutWireTeapot(1.0);
	glPopMatrix();
}
