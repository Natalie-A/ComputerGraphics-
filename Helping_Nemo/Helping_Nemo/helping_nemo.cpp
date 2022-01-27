#include<GL/glut.h>
#include<string.h>
#include<math.h>

double a = 0, aa = -70;

void init(void) {  
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
}
void fish1()
{
    //the body
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(367.5 + a, 312.5 + aa);
    glVertex2d(375 + a, 306.25 + aa);
    glVertex2d(392.5 + a, 312.5 + aa);
    glVertex2d(375 + a, 317.75 + aa);
    glEnd();

    //the tail
    glBegin(GL_POLYGON);
    glVertex2f(390 + a, 312.5 + aa);
    glColor3ub(rand() % 1, rand() % 1000, rand() % 1000);
    glVertex2f(401.25 + a, 317.5 + aa);
    glVertex2f(398.75 + a, 312.5 + aa);
    glVertex2f(401.25 + a, 306.75 + aa);
    glEnd();

    //the upper fin
    glBegin(GL_TRIANGLES);
    glColor3ub(rand() % 1, rand() % 1000, rand() % 1000);
    glVertex2d(375.5 + a, 318.25 + aa);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2d(385 + a, 327.25 + aa);
    glVertex2d(380 + a, 315 + aa);
    glEnd();

    //the lower fin
    glBegin(GL_TRIANGLES);
    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(375.5 + a, 307 + aa);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2d(385 + a, 300 + aa);
    glVertex2d(380 + a, 310 + aa);
    glEnd();

    //the eye
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glVertex2d(370 + a, 313.75 + aa);
    glEnd();
}

void welcomeDisplay(void) {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0, 0, 0);

    glRasterPos3f(250, 450, 0);
    char msg1[] = "Helping Nemo";
    for (int i = 0; i < strlen(msg1); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

    glRasterPos3f(280, 430, 0);
    char msg2[] = "Version 1.0";
    for (int i = 0; i < strlen(msg2); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, msg2[i]);

    glRasterPos3f(200, 50, 0);
    char msg3[] = "Developed by Natalie, Joy, Terrence and Boaz";
    for (int i = 0; i < strlen(msg3); i++)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg3[i]);

    glColor3f(0, 0, 1);
    glRasterPos3f(230, 250, 0);
    char msg4[] = "Press X to start the game";
    for (int i = 0; i < strlen(msg4); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg4[i]);

    glutSwapBuffers();

}
void display() {
    glClearColor(0.0, 0.6, 0.9, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    fish1();

    glColor3f(0, 0, 0);
    glRasterPos3f(250, 450, 0);
    char msg1[] = "Score:";
    for (int i = 0; i < strlen(msg1); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);
    glutSwapBuffers();
}
void movUp(void) {
    aa = aa + 10;
}
void movDown(void) {
    aa = aa - 10;
}
void keys(unsigned char key,int x,int y) {
    if (key == 'x') {
        glutDisplayFunc(display);
    }
    if (key == 'u') {
        movUp();
    }
    if (key == 'd') {
        movDown();
    }
    glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 50);
    glutCreateWindow("Helping_Nemo");
    glutDisplayFunc(welcomeDisplay);
    glutKeyboardFunc(keys);
    init();
    glutMainLoop();
    glEnable(GL_DEPTH_TEST);
    return 0;
}