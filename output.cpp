#include <windows.h>
#include <GL/glut.h>
void init ()
{
    glClearColor (255, 255, 255,0);//select clearing (background) color
    glMatrixMode(GL_PROJECTION);  //initialize viewing values
    glLoadIdentity(); // to load the program
   gluOrtho2D (0.0, 250.0, 0.0, 250.0);

}
void display()
{
	glClear (GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0); 
	glBegin(GL_LINES); 
		glVertex2i(200, 200); 
		glVertex2i(70, 20); 
		glVertex2i(120, 150); 
		glVertex2i(200, 20); 
		glVertex2i(60, 100); 
	glEnd();

    glFlush (); //start processing buffered OpenGL routines
}

//Declare initial window size, position, and display mode (single buffer and RGBA).
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//GLUT_SINGLE - This means that the program is automatically drawing straight to the window.
//GLUT_DOUBLE -  giving the program buffer to draw what it has to, then transfer what is actually needed to the screen.
//GLUT_RGB - An alias for GLUT_RGBA.
//GLUT_DEPTH - Bit mask to request a window with a depth buffer.
    glutInitWindowSize (200, 300);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Kunja");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
}


