#include<windows.h>
#include<stdio.h>
#include<gl/glut.h>
void myInit() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(10);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}
void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	//Roof triangle
	glBegin(GL_TRIANGLES);
	glVertex2f(200, 200);
	glVertex2f(250, 300);
	glVertex2f(300, 200);
	glEnd();
	//Base block
	glBegin(GL_QUADS);
	glVertex2f(200, 100);
	glVertex2f(200, 200);
	glVertex2f(300, 200);
	glVertex2f(300, 100);
	glEnd();
	//door
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(240, 100);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(240, 130);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(260, 130);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(260, 100);
	glEnd();
	//road
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(0, 100);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(640, 100);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(0, 10);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(640, 10);
	//dividers
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(50, 55);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(150, 55);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(200, 55);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(300, 55);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(350, 55);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(450, 55);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(500, 55);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2d(600, 55);
	glEnd();

	glFlush();
}
int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutCreateWindow("First Exercise");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
	return 1;
}