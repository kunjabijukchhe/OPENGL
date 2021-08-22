#include <windows.h>
#include <iostream>
using namespace std;
#include <math.h>
#include <Gl/glut.h>
GLdouble X1, Y1, X2, Y2; 

 

void LineEquations(void)
{
    GLdouble dx = X2-X1;
    GLdouble dy = Y2-Y1;
    GLdouble m = dy/dx;
    GLdouble c = Y1-m*X1;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 1.0);
    glBegin(GL_LINES);
    
    if(m<=1)
    {
        for(GLdouble x = X1; x<= X2 ; x++)
        {
            GLdouble y = m*x+c; 
            glVertex2d(x,y);
        }
    }
    else
    {
        for(GLdouble y = Y1; y <= Y2 ; y++)
        {
            GLdouble x = (1/m)*y-c; 
        }
    }
    glEnd();
    glFlush();
    }
    
    void Init()
    {
        glClearColor(1.0,1.0,1.0,1.0);
        glColor3f(1.0,0.0,0.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0, 300, 0, 300);
        
    }    
    
    int main(int argc, char **argv)
    {
        cout<<" enter two points for draw line using line equations:\n";
        cout<<"\nEnter point1 (X1) - Enter X1:";
        cin>>X1;
        cout<<"\nEnter point1 (Y1) - Enter Y1:";
        cin>>Y1;
        cout<<"\nEnter Point2(X2) - Enter X2:";
        cin>>X2;
        cout<<"\nEnter Point2(Y2) - Enter Y2:";
        cin>>Y2;
        glutInit(&argc,argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(300,300);
        glutInitWindowPosition(100,100);
        glutCreateWindow("Line Equation Algorithm");
        Init();
        glutDisplayFunc(LineEquations);
        glutMainLoop();
    }
