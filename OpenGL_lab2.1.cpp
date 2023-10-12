#define _USE_MATH_DEFINES
#include <GL/glut.h>
#include <cmath>
#include <iostream>
using namespace std;

float angleX = 0.0;
float angleY = 0.0;

float winHei = 800;
float winWid = 800;


void cat1() {
	glClear(GL_COLOR_BUFFER_BIT);
	float sideSize1 = 0.5;
	float sideSize2 = 0.4;
	float angle = 20;
	float inclined = sideSize1 * cos(angle * M_PI / 180);

	glBegin(GL_QUADS);

	//######################################################
	// Head
	// Right
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(0, 0);
	glVertex2f(0, sideSize2);
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));


	// Top
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(0, sideSize2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(0, sideSize2 + 2 * sideSize1 * sin(angle * M_PI / 180));
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));


	// Front
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(0, 0);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(0, sideSize2);

	//######################################################
	// Eyes
	glColor3f(1, 1, 1);

	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.0, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.0);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.0, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.0);

	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.8);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 1.0, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 1.0);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 1.0, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 1.0);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.8);

	glColor3f(0, 1, 0);

	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.4, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.4);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.4, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.4);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.2);

	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.8);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.8);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.6);

	//######################################################
	// Nose

	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.0 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.0);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.0 + sideSize1 * sin(angle * M_PI / 180) * 0.6);

	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.0 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.8);

	glColor3f(0.7, 0.7, 0.7);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.1);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.6);

	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.8);

	glColor3f(1.0, 0.7, 0.7);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.4, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.4);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.4, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.4);
	glVertex2f(2 * -sideSize1 * cos(angle * M_PI / 180) * 0.2 - sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);

	glEnd();
	glutSwapBuffers();
}

void cat2() {
	glClear(GL_COLOR_BUFFER_BIT);
	float sideSize1 = 0.5;
	float sideSize2 = 0.4;
	float angle = 20;
	float inclined = sideSize1 * cos(angle * M_PI / 180);

	glBegin(GL_QUADS);

	//######################################################
	// Head
	// Right
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(0, 0);
	glVertex2f(0, sideSize2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));


	// Top
	glVertex2f(0, sideSize2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(0, sideSize2 + 2 * sideSize1 * sin(angle * M_PI / 180));
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));


	// Front
	glVertex2f(0, 0);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(0, sideSize2);

	//######################################################
	// Eyes
	glColor3f(1, 1, 1);

	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.0, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.0);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.0, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.0);

	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.8);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 1.0, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 1.0);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 1.0, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 1.0);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.8);

	glColor3f(0, 1, 0);

	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.4, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.4);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.4, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.4);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.2);

	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.8);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.8);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.3 + sideSize1 * sin(angle * M_PI / 180) * 0.6);

	//######################################################
	// Nose

	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.0 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.0);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.0 + sideSize1 * sin(angle * M_PI / 180) * 0.6);

	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.0 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.8);

	glColor3f(0.7, 0.7, 0.7);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.1);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.6);

	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.6, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.6);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180) * 0.8, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.8);

	glColor3f(1.0, 0.7, 0.7);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.2);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.4, 0.1 + sideSize1 * sin(angle * M_PI / 180) * 0.4);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.4, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.4);
	glVertex2f(2 * sideSize1 * cos(angle * M_PI / 180) * 0.2 + sideSize1 * cos(angle * M_PI / 180) * 0.2, 0.2 + sideSize1 * sin(angle * M_PI / 180) * 0.2);

	glEnd();
	glutSwapBuffers();
}

void cat3() {
	glClear(GL_COLOR_BUFFER_BIT);
	float sideSize1 = 0.5;
	float sideSize2 = 0.4;
	float angle = 20;
	float inclined = sideSize1 * cos(angle * M_PI / 180);

	glBegin(GL_QUADS);

	//######################################################
	// Head
	// Right
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(0, 0);
	glVertex2f(0, sideSize2);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));


	// Top
	glVertex2f(0, sideSize2);
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(0, sideSize2 + 2 * sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));


	// Front
	glVertex2f(0, 0);
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(0, sideSize2);

	glEnd();
	glutSwapBuffers();
}

void cat4() {
	glClear(GL_COLOR_BUFFER_BIT);
	float sideSize1 = 0.5;
	float sideSize2 = 0.4;
	float angle = 20;
	float inclined = sideSize1 * cos(angle * M_PI / 180);

	glBegin(GL_QUADS);

	//######################################################
	// Head
	// Right
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(0, 0);
	glVertex2f(0, sideSize2);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));


	// Top
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(0, sideSize2);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(0, sideSize2 + 2 * sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));


	// Front
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(0, 0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(0, sideSize2);
	glColor3f(0.1, 0.1, 0.1);

	glEnd();
	glutSwapBuffers();
}

int i = 0;

void keyboard(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_LEFT:
		i -= 1;
		break;
	case GLUT_KEY_RIGHT:
		i += 1;
		break;
	}
	glutPostRedisplay();
}

void display() {
	switch (i % 4) {
	case 0:
		cat1();
		break;
	case 1:
		cat2();
		break;
	case 2:
		cat3();
		break;
	case 3:
		cat4();
		break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(winWid, winHei);
	glutCreateWindow("Cat head");

	glTranslatef(0.0, -0.4, 0.0);
	glScalef(1, 1.2, 1);
	glutDisplayFunc(display);
	glutSpecialFunc(keyboard);

	glClearColor(0.8f, 0.8f, 0.8f, 1.0f);

	glutMainLoop();

	return 0;
}