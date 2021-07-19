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

	for (int j = 1; j <= 8; j++) {
		glBegin(GL_QUAD_STRIP);
		for (int i = 1; i <= 8; i += 2) {
			if (j % 2 == 1) {
				glColor3f(0.0f, 0.0f, 0.0f);
				glVertex2f(i * 50, j * 50);
				glColor3f(0.0f, 0.0f, 0.0f);
				glVertex2f(i * 50, (j * 50) + 50);
				glColor3f(1.0f, 1.0f, 1.0f);
				glVertex2f((i * 50) + 50, j * 50);
				glColor3f(1.0f, 1.0f, 1.0f);
				glVertex2f((i * 50) + 50, (j * 50) + 50);
				glColor3f(1.0f, 1.0f, 1.0f);
				glVertex2f((i * 50) + 100, j * 50);
				glColor3f(1.0f, 1.0f, 1.0f);
				glVertex2f((i * 50) + 100, (j * 50) + 50);
			}
			else {
				glColor3f(1.0f, 1.0f, 1.0f);
				glVertex2f(i * 50, j * 50);
				glColor3f(1.0f, 1.0f, 1.0f);
				glVertex2f(i * 50, (j * 50) + 50);
				glColor3f(1.0f, 1.0f, 1.0f);
				glVertex2f((i * 50) + 50, j * 50);
				glColor3f(1.0f, 1.0f, 1.0f);
				glVertex2f((i * 50) + 50, (j * 50) + 50);
				glColor3f(0.0f, 0.0f, 0.0f);
				glVertex2f((i * 50) + 100, j * 50);
				glColor3f(0.0f, 0.0f, 0.0f);
				glVertex2f((i * 50) + 100, (j * 50) + 50);
			}
		}
		glEnd();
	}
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