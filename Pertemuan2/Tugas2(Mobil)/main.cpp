#include <windows.h>
#include <gl/glut.h>
#include <math.h>

void drawCircle(float x, float y, float radius) {
    glBegin(GL_POLYGON);
    for (int i = 0; i <= 360; i++) {
        float angle = i * 3.14159f / 180.0f;
        glVertex2f(x + cos(angle) * radius, y + sin(angle) * radius);
    }
    glEnd();
}

void GambarMobil(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity(); 

    glTranslatef(-0.2f, 0.0f, 0.0f); 

    glPushMatrix(); 
        glColor3f(0.0f, 0.5f, 0.8f); 
        glRectf(-0.4f, -0.1f, 0.4f, 0.1f); 
    glPopMatrix();


    glPushMatrix();
        glTranslatef(0.0f, 0.1f, 0.0f); 
        glColor3f(0.0f, 0.7f, 1.0f); 
        glRectf(-0.2f, 0.0f, 0.2f, 0.15f);
    glPopMatrix();


    glPushMatrix();
        glTranslatef(0.25f, -0.1f, 0.0f); 
        glRotated(0.0, 0, 0, 1); 
        glColor3f(0.2f, 0.2f, 0.2f); 
        drawCircle(0, 0, 0.08f);
    glPopMatrix();


    glPushMatrix();
        glTranslatef(-0.25f, -0.1f, 0.0f); 
        glColor3f(0.2f, 0.2f, 0.2f);
        drawCircle(0, 0, 0.08f);
    glPopMatrix();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mobil 2D Primitive & Stack");
    
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    
    glutDisplayFunc(GambarMobil);
    glutMainLoop();
    return 0;
}
