#include <windows.h>
#include <gl/glut.h>

void SegiEmpat(void)
{
    // Membersihkan buffer warna
    glClear(GL_COLOR_BUFFER_BIT);

    // Memindahkan posisi objek (translasi)
    glTranslatef(-0.50, 0.50, 0);

    // Mengatur warna objek menjadi merah (R=1, G=0, B=0)
    glColor3f(1.0f, 0.0f, 0.0f);

    // Menggambar persegi (x1, y1, x2, y2)
    glRectf(-0.18, 0.18, 0.18, -0.18);

    // Memastikan perintah rendering dieksekusi
    glFlush();
}

int main(int argc, char* argv[])
{
    // Inisialisasi GLUT
    glutInit(&argc, argv);

    // Mengatur ukuran jendela (lebar, tinggi)
    glutInitWindowSize(640, 480);

    // Mengatur mode tampilan (single buffer dan warna RGBA)
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

    // Membuat jendela dengan judul "Segi Empat"
    glutCreateWindow("Segi Empat");

    // Menentukan fungsi yang digunakan untuk menggambar
    glutDisplayFunc(SegiEmpat);

    // Mengatur warna latar belakang menjadi biru (R=0, G=0, B=1)
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

    // Memulai loop utama GLUT
    glutMainLoop();

    return 0;
}
