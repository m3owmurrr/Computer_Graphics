#include <GL/glew.h>
#include <GL/glut.h>

double winWid = 800;
double winHei = 450;

double aspectRatio =  winWid / winHei;


double xQ1 = -1.0;
double xQ2 = 1.0;
double yQ1 = -1.0;
double yQ2 = -0.33;
double yQ3 = 0.33;
double yQ4 = 1.0;


double xT1 = -0.50 * 0.3 / aspectRatio;
double xT2 = 0.50 * 0.3 / aspectRatio;
double xT3 = 0.0 * 0.3 / aspectRatio;
double xT4 = -0.8 * 0.3 / aspectRatio;
double xT5 = 0.8 * 0.3 / aspectRatio;


double yT1 = -0.68 * 0.3;
double yT2 = 0.8 * 0.3;
double yT3 = -0.32 * 0.3;
double yT4 = 0.26 * 0.3;

double starMovment = 0.33;



void draw() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(xQ1, yQ1);
    glVertex2f(xQ2, yQ1);
    glVertex2f(xQ2, yQ2);
    glVertex2f(xQ1, yQ2);

    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(xQ1, yQ2);
    glVertex2f(xQ2, yQ2);
    glVertex2f(xQ2, yQ3);
    glVertex2f(xQ1, yQ3);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(xQ1, yQ3);
    glVertex2f(xQ2, yQ3);
    glVertex2f(xQ2, yQ4);
    glVertex2f(xQ1, yQ4);
    glEnd();

//################################################

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.482, 0.227);
    glVertex2f(xT1 + starMovment, yT1);
    glVertex2f(xT2 + starMovment, yT1);
    glVertex2f(xT3 + starMovment, yT2);

    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(xT1 + starMovment, yT1);
    glVertex2f(xT2 + starMovment, yT1);
    glVertex2f(xT3 + starMovment, yT3);

    glColor3f(0.0, 0.482, 0.227);
    glVertex2f(xT4 + starMovment, yT4);
    glVertex2f(xT5 + starMovment, yT4);
    glVertex2f(xT3 + starMovment, yT3);
    glEnd();

//################################################

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.482, 0.227);
    glVertex2f(xT1 - starMovment, yT1);
    glVertex2f(xT2 - starMovment, yT1);
    glVertex2f(xT3 - starMovment, yT2);

    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(xT1 - starMovment, yT1);
    glVertex2f(xT2 - starMovment, yT1);
    glVertex2f(xT3 - starMovment, yT3);

    glColor3f(0.0, 0.482, 0.227);
    glVertex2f(xT4 - starMovment, yT4);
    glVertex2f(xT5 - starMovment, yT4);
    glVertex2f(xT3 - starMovment, yT3);
    glEnd();

    glutSwapBuffers();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(winWid, winHei);
    glutCreateWindow("Флаг сирии");

    glutDisplayFunc(draw);

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glutMainLoop();

    return 0;
}