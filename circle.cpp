#include <windows.h>
#include <gl/glut.h>
#include <math.h>
void init ()
{
//    glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);  //initialize viewing values
    glLoadIdentity(); // to load the program
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0); //glOrtho2D - the display will be in the range of this area
//  gluOrtho2D (0.0, 500.0, 0.0, 500.0); //glOrtho2D - the display will be in the range of this area

}
void display()
{
	float x,y;
	float a=100.0, b=100.0;
	float r=100,t;
//	float a=10.0, b=10.0;
//	float r=15,t;
    glClear(GL_COLOR_BUFFER_BIT);//clear all pixels
    glColor3f(0.252, 0.7, 0.3);   
    glBegin(GL_POLYGON);
//    glBegin(GL_LINES);
//	glBegin(GL_POINTS);
    for(t=0; t<1000;t++){
    	x=a+(r * cos(t));
    	y=b+(r*sin(t));
    	glVertex2f(x,y);
	}
	
    glEnd();
    glFlush (); //start processing buffered OpenGL routines
}



//Declare initial window size, position, and display mode (single buffer and RGBA).
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition (100, 100);
    glutCreateWindow("Circle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}


