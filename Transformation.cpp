#include <windows.h> 
#include <GL/glut.h> 

void init ()  
{ 
    glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color 
    glMatrixMode(GL_PROJECTION);  //initialize viewing values  
    glLoadIdentity(); // to load the program 
    gluOrtho2D (-150.0, 250.0, -150.0, 200.0); //glOrtho2D - the display will be in the range of this area 
} 
void display() 
{ 
    glClear (GL_COLOR_BUFFER_BIT);//clear all pixels 
    glColor3f (1.0, 0.0, 0.0);//set color to yellow 
    
//    glTranslatef(-25,0.0,0.0);
    glRotatef(-60,0.0,0.0,1.0);
//      glScalef(-25,0.0,0.0);
    
  
    glPointSize(5.0f);//set point size to 10 pixels 
    glBegin(GL_POLYGON); 
    glVertex3f(50,25,0.0);
    glVertex3f(100,25,0.0);
    glVertex3f(100,75,0.0);
    glVertex3f(50,75,0.0);
    glEnd(); 
    glFlush (); //start processing buffered OpenGL routines 
} 
//Declare initial window size, position, and display mode (single buffer and RGBA).  
int main(int argc, char** argv) 
{ 
    glutInit(&argc, argv); 
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH); 
    glutInitWindowSize (300, 300);  
    glutInitWindowPosition (100, 100); 
    glutCreateWindow ("Tranformation"); 
    init (); 
    glutDisplayFunc(display);  
    glutMainLoop(); 
}

