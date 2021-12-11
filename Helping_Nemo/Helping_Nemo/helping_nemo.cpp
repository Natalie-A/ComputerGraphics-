#include<GL/glut.h>
#include<string.h>

void init(void) {
    glClearColor(1, 1, 1, 1);    //Defining world coordinate frame
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -10, 10, -10, 10);
    glMatrixMode(GL_MODELVIEW);// model in real word units
    // (left, right, bottom, top, near, far)
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0, 0, 0);

    glRasterPos3f(0, 8, 0);
    char msg1[] = "Helping Nemo";
    for (int i = 0; i < strlen(msg1); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

    glRasterPos3f(1.5, 7.5, 0);
    char msg2[] = "Version 1.0";
    for (int i = 0; i < strlen(msg2); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, msg2[i]);

    glRasterPos3f(-2.5, -7.5, 0);
    char msg3[] = "Developed by Natalie, Joy, Terrence and Boaz";
    for (int i = 0; i < strlen(msg3); i++)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg3[i]);

    glutSwapBuffers();

}
int main(int argc, char** argv)

{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 50);
    glutCreateWindow("Helping_Nemo");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    glEnable(GL_DEPTH_TEST);
    return 0;
}