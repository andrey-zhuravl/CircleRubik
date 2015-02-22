// CircleRubik.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <ctime>
#include <iostream>
#include <vector>
#include "windows.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

using namespace std;

void display(){
	glColor3f(0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS); 
	glVertex2f(0.5, 0.6);
	glVertex2f(0.5, -0.5); 
	glVertex2f(-0.5, -0.5); 
	glVertex2f(-0.5, 0.5); 
	glEnd();
	glutSwapBuffers();
}

void  idle(){
}
void mouse(int button, int state, int x, int y){
	if(state == 0){
		if(button == 0){
		}else{

		}
	}
}

void  passiveMotion(int x, int y){
}

void  keyboard(unsigned char key, int x, int y){
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (800, 400);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("WORLD");

	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_FLAT);

	glutDisplayFunc(display);  
	glutIdleFunc(idle); 
	glutMouseFunc(mouse);
	glutPassiveMotionFunc(passiveMotion);
	glutKeyboardFunc(keyboard);
	glutMainLoop(); 
	return 0;
}

