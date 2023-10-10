#include <GL/glut.h>

float angleX = 0.0;
float angleY = 0.0;

float winHei = 800;
float winWid = 800;


void drawCube(float size) {
    float size0 = size * 0.0;
    float size1 = size * 0.5;
    float size2 = size * 1.0; 
    float size3 = size * 1.5;
    float size4 = size * 2.0;
    float size5 = size * 2.5;
    float size6 = size * 3.0;
    float size7 = size * 3.5;

    glBegin(GL_QUADS);

//######################################################
    //Head
    // Front face
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(size5, size4, size5);
    glVertex3f(size5, -size4, size5);
    glVertex3f(-size5, -size4, size5);
    glVertex3f(-size5, size4, size5);

    // Left face
    glVertex3f(-size5, size4, size5);
    glVertex3f(-size5, -size4, size5);
    glVertex3f(-size5, -size4, -size5);
    glVertex3f(-size5, size4, -size5);

    // Back face
    glVertex3f(-size5, size4, -size5);
    glVertex3f(-size5, -size4, -size5);
    glVertex3f(size5, -size4, -size5);
    glVertex3f(size5, size4, -size5);

    // Right face
    glVertex3f(size5, size4, -size5);
    glVertex3f(size5, -size4, -size5);
    glVertex3f(size5, -size4, size5);
    glVertex3f(size5, size4, size5);

    // Top face
    glVertex3f(size5, size4, -size5);
    glVertex3f(size5, size4, size5);
    glVertex3f(-size5, size4, size5);
    glVertex3f(-size5, size4, -size5);

    // Bottom face
    glVertex3f(size5, -size4, size5);
    glVertex3f(-size5, -size4, size5);
    glVertex3f(-size5, -size4, -size5);
    glVertex3f(size5, -size4, -size5);

//######################################################
    //kitty face
    // Eyes white
    glColor3f(1.0, 1.0, 1.0);  
    glVertex3f(-size3, size2, size5 + 0.001);
    glVertex3f(-size3, size0, size5 + 0.001);
    glVertex3f(-size5, size0, size5 + 0.001);
    glVertex3f(-size5, size2, size5 + 0.001);

    glVertex3f(size5, size2, size5 + 0.001);
    glVertex3f(size5, size0, size5 + 0.001);
    glVertex3f(size3, size0, size5 + 0.001);
    glVertex3f(size3, size2, size5 + 0.001);

    // Eyes green
    glColor3f(0.5, 1.0, 0.5);  
    glVertex3f(-size1, size2, size5 + 0.001);
    glVertex3f(-size1, size0, size5 + 0.001);
    glVertex3f(-size3, size0, size5 + 0.001);
    glVertex3f(-size3, size2, size5 + 0.001);

    glVertex3f(size3, size2, size5 + 0.001);
    glVertex3f(size3, size0, size5 + 0.001);
    glVertex3f(size1, size0, size5 + 0.001);
    glVertex3f(size1, size2, size5 + 0.001);

//-------------------------------------------------

    //white grey
    //Front nose
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(size3, -size2, size7);
    glVertex3f(size3, -size4, size7);
    glVertex3f(-size3, -size4, size7);
    glVertex3f(-size3, -size2, size7);

    //Left nose
    glVertex3f(-size3, -size2, size7);
    glVertex3f(-size3, -size4, size7);
    glVertex3f(-size3, -size4, size5);
    glVertex3f(-size3, -size2, size5);

    //Right nose
    glVertex3f(size3, -size2, size5);
    glVertex3f(size3, -size4, size5);
    glVertex3f(size3, -size4, size7);
    glVertex3f(size3, -size2, size7);
    
    //Bottom nose
    glVertex3f(size3, -size4, size7);
    glVertex3f(-size3, -size4, size7);
    glVertex3f(-size3, -size4, size5);
    glVertex3f(size3, -size4, size5);

//-------------------------------------------------
    //dark gray
    //Front nose
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(size3, -size0, size7);
    glVertex3f(size3, -size2, size7);
    glVertex3f(-size3, -size2, size7);
    glVertex3f(-size3, -size0, size7);

    //Left nose
    glVertex3f(-size3, size0, size7);
    glVertex3f(-size3, -size2, size7);
    glVertex3f(-size3, -size2, size5);
    glVertex3f(-size3, size0, size5);

    //Right nose
    glVertex3f(size3, size0, size5);
    glVertex3f(size3, -size2, size5);
    glVertex3f(size3, -size2, size7);
    glVertex3f(size3, size0, size7);

    //Top nose
    glVertex3f(size3, -size0, size5);
    glVertex3f(-size3, -size0, size5);
    glVertex3f(-size3, -size0, size7);
    glVertex3f(size3, -size0, size7);

//--------------------------------------------
   
    // nose
    glColor3f(1.0, 0.5, 0.5);  
    glVertex3f(size1, -size0, size7 + 0.001);
    glVertex3f(size1, -size2, size7 + 0.001);
    glVertex3f(-size1, -size2, size7 + 0.001);
    glVertex3f(-size1, -size0, size7 + 0.001);

//######################################################
    // Ears 
    // ear left 
    // Front face
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(-size2, size6, -size1);
    glVertex3f(-size2, size4, -size1);
    glVertex3f(-size4, size4, -size1);
    glVertex3f(-size4, size6, -size1);

    // Left face
    glVertex3f(-size4, size6, -size1);
    glVertex3f(-size4, size4, -size1);
    glVertex3f(-size4, size4, -size5);
    glVertex3f(-size4, size6, -size5);

    // Back face
    glVertex3f(-size4, size6, -size5);
    glVertex3f(-size4, size4, -size5);
    glVertex3f(-size2, size4, -size5);
    glVertex3f(-size2, size6, -size5);

    // Right face
    glVertex3f(-size2, size6, -size5);
    glVertex3f(-size2, size4, -size5);
    glVertex3f(-size2, size4, -size1);
    glVertex3f(-size2, size6, -size1);

    // Top face
    glVertex3f(-size2, size6, -size5);
    glVertex3f(-size2, size6, -size1);
    glVertex3f(-size4, size6, -size1);
    glVertex3f(-size4, size6, -size5);

    // ear right
    // Front face
    glVertex3f(size4, size6, -size1);
    glVertex3f(size4, size4, -size1);
    glVertex3f(size2, size4, -size1);
    glVertex3f(size2, size6, -size1);

    // Left face
    glVertex3f(size2, size6, -size1);
    glVertex3f(size2, size4, -size1);
    glVertex3f(size2, size4, -size5);
    glVertex3f(size2, size6, -size5);

    // Back face
    glVertex3f(size2, size6, -size5);
    glVertex3f(size2, size4, -size5);
    glVertex3f(size4, size4, -size5);
    glVertex3f(size4, size6, -size5);

    // Right face
    glVertex3f(size4, size6, -size5);
    glVertex3f(size4, size4, -size5);
    glVertex3f(size4, size4, -size1);
    glVertex3f(size4, size6, -size1);

    // Top face
    glVertex3f(size4, size6, -size5);
    glVertex3f(size4, size6, -size1);
    glVertex3f(size2, size6, -size1);
    glVertex3f(size2, size6, -size5);

    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
    glRotatef(angleX, 1.0, 0.0, 0.0);
    glRotatef(angleY, 0.0, 1.0, 0.0);  // Вращение вокруг оси Y

    drawCube(1.0);

    glPopMatrix();

    glutSwapBuffers();
}


void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case '2':
        angleY += 5.0;  // Поворот влево при нажатии кнопки '1'
        break;
    case '1':
        angleY -= 5.0;  // Поворот вправо при нажатии кнопки '2'
        break;
    case '4':
        angleX += 5.0;  // Поворот вправо при нажатии кнопки '2'
        break;
    case '3':
        angleX -= 5.0;  // Поворот вправо при нажатии кнопки '2'
        break;
    }

    glutPostRedisplay();
}

void init() {
    glClearColor(0.9, 0.9, 0.9, 1.0);
    glEnable(GL_DEPTH_TEST);

    glMatrixMode(GL_PROJECTION);
    gluPerspective(45.0, 1.0, 0.1, 100.0);
    glMatrixMode(GL_MODELVIEW);
    gluLookAt(5.0, 5.0, 15.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Rotating Cube with Kitty Face");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);  // Регистрация функции обработки клавиш
    init();
    glutMainLoop();
    return 0;
}
