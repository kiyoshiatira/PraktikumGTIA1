#include <windows.h>
#include <gl/glut.h>

void Segitiga(void)
{
    // Menggeser posisi objek (0.25 ke kanan, -0.25 ke bawah)
    glTranslatef(0.25, -0.25, 0);

    // Memutar objek sebesar 60 derajat terhadap sumbu Z
    glRotated(60.0, 0.0, 0.0, 1.0);

    // Mulai menggambar segitiga
    glBegin(GL_TRIANGLES);
        // Titik 1: Merah
        glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(-0.05, -0.05, 0.00);
        // Titik 2: Hijau
        glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(0.15, -0.05, 0.00);
        // Titik 3: Biru
        glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(-0.05, 0.05, 0.00);
    glEnd();
    
    // Memastikan rendering selesai
    glFlush();
}

int main(int argc, char* argv[])
{
    // Inisialisasi GLUT
    glutInit(&argc, argv);
    
    // Mengatur ukuran jendela
    glutInitWindowSize(640, 480);
    
    // Mengatur mode tampilan
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    
    // Membuat jendela (di gambar judulnya tetap "Segi Empat" walau isinya segitiga)
    glutCreateWindow("Segi Empat");
    
    // Menghubungkan fungsi gambar
    glutDisplayFunc(Segitiga);
    
    // Warna background biru
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    
    // Memulai loop program
    glutMainLoop();
    
    return 0;
}
