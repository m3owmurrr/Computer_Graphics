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
	float sideSize1 = 0.5;
	float sideSize2 = 0.4;
	float angle = 20;
	float inclined = sideSize1 * cos(angle * M_PI / 180);

	cout << inclined;
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
	glVertex2f(0, sideSize2 + 2 * sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));


	// Front
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
}

void cat2() {
	float sideSize1 = 0.5;
	float sideSize2 = 0.4;
	float angle = 20;
	float inclined = sideSize1 * cos(angle * M_PI / 180);

	cout << inclined;
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
	glVertex2f(0, sideSize2 + 2 * sideSize1 * sin(angle * M_PI / 180));
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
}

void cat3() {
	float sideSize1 = 0.5;
	float sideSize2 = 0.4;
	float angle = 20;
	float inclined = sideSize1 * cos(angle * M_PI / 180);

	cout << inclined;
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
	glVertex2f(0, sideSize2 + 2 * sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));


	// Front
	glVertex2f(0, 0);
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(-sideSize1 * cos(angle * M_PI / 180), sideSize2 + sideSize1 * sin(angle * M_PI / 180));
	glVertex2f(0, sideSize2);

	glEnd();
}

int i = 0;

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case '1':
		i += 1;
		break;
	case '2':
		i -= 1;
		break;
	}

	
}

void init() {
	glClearColor(0.8, 0.8, 0.8, 1.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Rotating Cube with Kitty Face");
	
	switch (i % 4) {
	case 0:
		glutDisplayFunc(cat1);glutPostRedisplay();
		break;
	case 1:
		glutDisplayFunc(cat2); glutPostRedisplay();
		break;
	case 2:
		glutDisplayFunc(cat3); glutPostRedisplay();
		break;
	case 4:
		glutDisplayFunc(cat3); glutPostRedisplay();
		break;
	}

	glutKeyboardFunc(keyboard);
	init();
	glutMainLoop();
	return 0;
}
