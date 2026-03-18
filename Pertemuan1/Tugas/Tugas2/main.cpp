#include <windows.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // KUBUS 1 (Paling Bawah)
    glColor3f(1.0f, 0.0f, 0.0f); // Merah
    glRectf(-0.7, -0.7, -0.5, -0.5);

    // KUBUS 2
    glColor3f(0.0f, 1.0f, 0.0f); // Hijau
    glRectf(-0.5, -0.5, -0.3, -0.3);

    // KUBUS 3
    glColor3f(1.0f, 1.0f, 0.0f); // Kuning
    glRectf(-0.3, -0.3, -0.1, -0.1);

    // KUBUS 4
    glColor3f(1.0f, 0.0f, 1.0f); // Magenta
    glRectf(-0.1, -0.1, 0.1, 0.1);

    // KUBUS 5 (Paling Atas)
    glColor3f(0.0f, 1.0f, 1.0f); // Cyan
    glRectf(0.1, 0.1, 0.3, 0.3);

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Tugas 2 - 5 Kubus");
    glutDisplayFunc(display);
    // Warna background (opsional, ganti kalau mau)
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
    glutMainLoop();
    return 0;
}
