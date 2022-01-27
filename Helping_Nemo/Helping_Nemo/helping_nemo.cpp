#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

float a = 0, aa = -70, b = 0, bb = 0, flag = 0, flag3 = 0, flag4 = 0;
int moving = 0;
//void create_menu(void);
//void menu(int);
//void mov(void);

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

void coral() {

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(250 + b, 500 + bb);
    glVertex2f(250 + b, 341.25 + bb);
    glVertex2f(255 + b, 341.25 + bb);
    glVertex2f(255 + b, 500 + bb);

    glEnd();

   glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(250 + b, 286.25 + bb);
    glVertex2f(250 + b, 0 + bb);
    glVertex2f(255 + b, 0 + bb);
    glVertex2f(255 + b, 286.25 + bb);

    glEnd();
    
      glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(187.5 + b, 500 + bb);
    glVertex2f(187.5 + b, 286.25 + bb);
    glVertex2f(192.5 + b, 286.25 + bb);
    glVertex2f(192.5 + b, 500 + bb);

    glEnd();
    
     glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(187.5 + b, 231.25 + bb);
    glVertex2f(187.5 + b, 0 + bb);
    glVertex2f(192.5 + b, 0 + bb);
    glVertex2f(192.5 + b, 231.25 + bb);

    glEnd();
    
    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(125 + b, 500 + bb);
    glVertex2f(125 + b, 341.25 + bb);
    glVertex2f(130 + b, 341.25 + bb);
    glVertex2f(130 + b, 500 + bb);

    glEnd();
    
     glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(125 + b, 286.25 + bb);
    glVertex2f(125 + b, 0 + bb);
    glVertex2f(130 + b, 0 + bb);
    glVertex2f(130 + b, 286.25 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(62.5 + b, 500 + bb);
    glVertex2f(62.5 + b, 286.25 + bb);
    glVertex2f(67.5 + b, 286.25 + bb);
    glVertex2f(67.5 + b, 500 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(62.5 + b, 231.25 + bb);
    glVertex2f(62.5 + b, 0 + bb);
    glVertex2f(67.5 + b, 0 + bb);
    glVertex2f(67.5 + b, 231.25 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(0 + b, 500 + bb);
    glVertex2f(0 + b, 341.25 + bb);
    glVertex2f(5 + b, 341.25 + bb);
    glVertex2f(5 + b, 500 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(0 + b, 286.25 + bb);
    glVertex2f(0 + b, 0 + bb);
    glVertex2f(5 + b, 0 + bb);
    glVertex2f(5 + b, 286.25 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(437.5 + b, 500 + bb);
    glVertex2f(437.5 + b, 396.25 + bb);
    glVertex2f(442.5 + b, 396.25 + bb);
    glVertex2f(442.5 + b, 500 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(437.5 + b, 341.25 + bb);
    glVertex2f(437.5 + b, 0 + bb);
    glVertex2f(442.5 + b, 0 + bb);
    glVertex2f(442.5 + b, 341.25 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(375 + b, 500 + bb);
    glVertex2f(375 + b, 341.25 + bb);
    glVertex2f(380 + b, 341.25 + bb);
    glVertex2f(380 + b, 500 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(375 + b, 286.25 + bb);
    glVertex2f(375 + b, 0 + bb);
    glVertex2f(380 + b, 0 + bb);
    glVertex2f(380 + b, 286.25 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(312.5 + b, 500 + bb);
    glVertex2f(312.5 + b, 396.25 + bb);
    glVertex2f(317.5 + b, 396.25 + bb);
    glVertex2f(317.5 + b, 500 + bb);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(rand() % 1, rand() % 1000, 0);
    glVertex2f(312.5 + b, 341.25 + bb);
    glVertex2f(312.5 + b, 0 + bb);
    glVertex2f(317.5 + b, 0 + bb);
    glVertex2f(317.5 + b, 341.25 + bb);

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
    /*if (moving == 1) {
        mov();
    } */

    fish1();
    coral();

    
    glColor3f(0, 0, 0);

    glRasterPos3f(250, 450, 0);
    char msg1[] = "Score:";
    for (int i = 0; i < strlen(msg1); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

    /*if (flag3 == 0) {
        welcomeDisplay();
    } */

    glutSwapBuffers();
}

/*void mov(void) {
    if (b <= 1000)
        b = b + 8.0;
    else
        b = -500;

    if (b > 1000) {
        bb = bb + 150;
    }
    if (bb > 251) {
        bb = 50;
    }
} 

void create_menu(void) {
    glutCreateMenu(menu);
    glutAttachMenu(GLUT_LEFT_BUTTON);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutAddMenuEntry("Start", 1);
    glutAddMenuEntry("Pause", 2);
    glutAddMenuEntry("Back", 3);
    glutAddMenuEntry("Quit Game", 4);

}

void menu(int val) {
    switch (val) {
    case 1:
        if (flag4 == 1 && moving == 0)
            moving = 1;
        break;

    case 2:
        glutIdleFunc(NULL);
        glutDisplayFunc(display);
        moving = 0;
        break;

    case 3:
        moving = 0;
        flag3 = 0;
        flag4 = 0;
        welcomeDisplay();
        break;

    case 4:
        exit(0);
        break;
    }
}

void speed() {
    b = b + 10;
} */

void keys(unsigned char key, int x, int y) {
    if (key == 'x') {
        glutDisplayFunc(display);
        //flag3 = 1;
        //flag4 = 1;
    }

    //if score exceeds 200, increase speed
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