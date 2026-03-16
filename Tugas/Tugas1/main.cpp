#include <windows.h>
#include <gl/glut.h>

void TugasPrimitif(void) {
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 0.0f); 
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.4f, 0.8f);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 1.0f, 1.0f); 
    glVertex2f(-0.1f, 0.8f);
    glVertex2f(0.1f, 0.6f);
    glVertex2f(0.3f, 0.8f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.5f, 0.0f); 
    glVertex2f(0.7f, 0.7f); 
    glVertex2f(0.5f, 0.9f);
    glVertex2f(0.6f, 0.5f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.9f, 0.9f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 0.0f, 1.0f); 
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.6f, -0.8f);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(-0.2f, -0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 1.0f); 
    glVertex2f(0.0f, -0.5f);
    glVertex2f(0.2f, -0.5f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.0f, -0.8f);
    glEnd();


    glBegin(GL_QUAD_STRIP);
    glColor3f(0.5f, 1.0f, 0.5f); 
    glVertex2f(0.4f, -0.5f);
    glVertex2f(0.4f, -0.8f);
    glVertex2f(0.6f, -0.4f);
    glVertex2f(0.6f, -0.7f);
    glVertex2f(0.8f, -0.5f);
    glVertex2f(0.8f, -0.8f);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas 1: Primitif Drawing");
    glutDisplayFunc(TugasPrimitif);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f); 
    glutMainLoop();
    return 0;
}
