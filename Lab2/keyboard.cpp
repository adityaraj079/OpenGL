#include <GL/glut.h>
void displayMe(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_POLYGON);
 glVertex3f(0.5, 0.0, 0.5);
 glVertex3f(0.5, 0.0, 0.0);
 glVertex3f(0.0, 0.5, 0.0);
 glVertex3f(0.0, 0.0, 0.5);
 glEnd();
 glFlush();
}



void my_key_event (unsigned char key, int x, int y)
{	
    if ( key ) 
    {
		
		glColor3f(0.0, 1.0, 0.0);
        glutDisplayFunc(displayMe);
        
	}

}

int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE);
 glutInitWindowSize(400, 300);
 glutInitWindowPosition(100, 100);
 glutCreateWindow("Hello world!");
 glutDisplayFunc(displayMe);
 glutKeyboardFunc(my_key_event);
 glutMainLoop();
 return 0;
}