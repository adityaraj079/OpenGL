#include<GL/glut.h>

#include<GL/gl.h> 

#include<iostream>

using namespace std;

void init()

{

 glClearColor(1.0, 0.0, 0.0, 1.0);

 glMatrixMode(GL_PROJECTION);

   gluOrtho2D(0.0, 700, 0.0, 700);

}

void display()

{

           glBegin( GL_TRIANGLES );

                       glVertex2i( 200,400 );

                       glVertex2i( 400,400 );

                       glVertex2i( 300,600 );

           glEnd();

           glFlush();

}

int main(int argc, char**argv) 

{

   glutInit(&argc, argv); 

   glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 

   glutInitWindowSize( 700,700 ); 

   glutCreateWindow("Rohit Srivastava"); 

   init(); //Important to initialize 

   glutDisplayFunc(display); 

   glutMainLoop(); //See screen for long time similar to getch

}