#include <windows.h>
#include <GL/glut.h>
#include <math.h>
void init ()
{
//    glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);  //initialize viewing values
    glLoadIdentity(); // to load the program
//    gluOrtho2D (-100.0, 100.0, -100.0, 100.0); //glOrtho2D - the display will be in the range of this area
  gluOrtho2D (0.0, 500.0, 0.0, 500.0); //glOrtho2D - the display will be in the range of this area

}
void display()
{
	float x,y;
	float a=150.0, b=150.0;
	float r=50,t;
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(0.252, 0.7, 0.3); 
	glLineWidth(5.0f); 
    glBegin(GL_LINES);
    for(t=0; t<2000;t++){
    	x=a+(r * cos(t));
    	y=b+(r*sin(t));
    	glVertex2f(x,y);
	}
	glEnd();
	
	glColor3f(0, 1, 1); 
	glLineWidth(3.0f); 
    glBegin(GL_POLYGON);
    for(t=0; t<800;t++){
    	x=a+(r * cos(t));
    	y=b+(r*sin(t));
    	glVertex2f(x,y);
	}
    glEnd();
    
    glColor3f (1.0, 0.3, 0.2);
    glLineWidth(3.0f); 
	glBegin(GL_LINES);             
	glVertex2f(150.0, 100.0);         
	glVertex2f(150.0, 0);         
	glEnd();
	
	
	float xx,yy;
	float aa=350.0, bb=350.0;
	float rr=100,tt;
    glColor3f(0.252, 0.7, 0.3); 
	glLineWidth(5.0f); 
    glBegin(GL_LINES);
    for(tt=0; tt<2000;tt++){
    	xx=aa+(rr * cos(tt));
    	yy=bb+(rr*sin(tt));
    	glVertex2f(xx,yy);
	}
	glEnd();
	
	glColor3f(0, 1, 1); 
	glLineWidth(3.0f); 
    glBegin(GL_POLYGON);
 	for(tt=0; tt<800;tt++){
    	xx=aa+(rr * cos(tt));
    	yy=bb+(rr*sin(tt));
    	glVertex2f(xx,yy);
	}
    glEnd();
	
	glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0f); 
	glBegin(GL_LINES);             
	glVertex2f(350.0, 250.0);         
	glVertex2f(350.0, 0);         
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



