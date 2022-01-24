#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

float a = 0, aa = -70;

void init(void) {  
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
}
void fish1()
{
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(270 + a, 350 + aa);

    glVertex2f(300 + a, 325 + aa);

    glVertex2f(370 + a, 350 + aa);
    glVertex2f(300 + a, 375 + aa);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(360 + a, 350 + aa);
    glColor3ub(rand() % 1, rand() % 1000, rand() % 1000);
    glVertex2f(405 + a, 370 + aa);
    glVertex2f(395 + a, 350 + aa);
    glVertex2f(405 + a, 327 + aa);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(rand() % 1, rand() % 1000, rand() % 1000);
    glVertex2f(302 + a, 373 + aa);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(340 + a, 409 + aa);
    glVertex2f(320 + a, 360 + aa);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(302 + a, 328 + aa);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(340 + a, 300 + aa);
    glVertex2f(320 + a, 340 + aa);
    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(280 + a, 355 + aa);
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
void keys(unsigned char key,int x,int y) {
    if (key == 'x') {
        glutDisplayFunc(display);
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