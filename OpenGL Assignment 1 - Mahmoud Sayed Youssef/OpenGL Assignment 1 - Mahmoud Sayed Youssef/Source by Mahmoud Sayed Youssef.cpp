#include<GL/glut.h>
#include<math.h>
GLsizei Width;
GLsizei Higth;
#define GL_PI 3.1415f
int My_Value;
bool Check1 = true;
bool Check2 = false;
bool Check3 = false;
bool Check4 = false;
// Rotation amounts
static GLfloat xRot1 = 0.0f;
static GLfloat yRot1 = 0.0f;
static GLfloat xRot2 = 0.0f;
static GLfloat yRot2 = 0.0f;
static GLfloat xRot3 = 0.0f;
static GLfloat yRot3 = 0.0f;
static GLfloat xRot4 = 0.0f;
static GLfloat yRot4 = 0.0f;

void Shap_Drow_with_Rotation1() {

	glPushMatrix();
	glRotatef(xRot1, 1.0f, 0.0f, 0.0f);
	glRotatef(yRot1, 0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	//abcd
	glVertex3f(200, 200, 200);//a
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, -200, 200);//c
	glVertex3f(200, -200, 200);//d
	glEnd();

	glBegin(GL_QUADS);
	//adeg
	glVertex3f(200, 200, 200);//a
	glVertex3f(200, -200, 200);//d
	glVertex3f(200, -200, -200);//e
	glVertex3f(200, 200, -200);//g
	glEnd();

	glBegin(GL_QUADS);
	//hgef
	glVertex3f(-200, 200, -200);//h
	glVertex3f(200, 200, -200);//g
	glVertex3f(200, -200, -200);//e
	glVertex3f(-200, -200, -200);//f
	glEnd();

	glBegin(GL_QUADS);
	//bcfh
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, -200, 200);//c
	glVertex3f(-200, -200, -200);//f
	glVertex3f(-200, 200, -200);//h
	glEnd();

	glBegin(GL_QUADS);
	//cdef
	glVertex3f(-200, -200, 200);//c
	glVertex3f(200, -200, 200);//d
	glVertex3f(200, -200, -200);//e
	glVertex3f(-200, -200, -200);//f
	glEnd();

	glBegin(GL_QUADS);
	//abhg
	glVertex3f(200, 200, 200);//a
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, 200, -200);//h
	glVertex3f(200, 200, -200);//g
	glEnd();

	glPopMatrix();
}
void Shap_Drow_with_Rotation2() {

	glPushMatrix();
	glRotatef(xRot2, 1.0f, 0.0f, 0.0f);
	glRotatef(yRot2, 0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	//abcd
	glVertex3f(200, 200, 200);//a
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, -200, 200);//c
	glVertex3f(200, -200, 200);//d
	glEnd();

	glBegin(GL_QUADS);
	//adeg
	glVertex3f(200, 200, 200);//a
	glVertex3f(200, -200, 200);//d
	glVertex3f(200, -200, -200);//e
	glVertex3f(200, 200, -200);//g
	glEnd();

	glBegin(GL_QUADS);
	//hgef
	glVertex3f(-200, 200, -200);//h
	glVertex3f(200, 200, -200);//g
	glVertex3f(200, -200, -200);//e
	glVertex3f(-200, -200, -200);//f
	glEnd();

	glBegin(GL_QUADS);
	//bcfh
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, -200, 200);//c
	glVertex3f(-200, -200, -200);//f
	glVertex3f(-200, 200, -200);//h
	glEnd();

	glBegin(GL_QUADS);
	//cdef
	glVertex3f(-200, -200, 200);//c
	glVertex3f(200, -200, 200);//d
	glVertex3f(200, -200, -200);//e
	glVertex3f(-200, -200, -200);//f
	glEnd();

	glBegin(GL_QUADS);
	//abhg
	glVertex3f(200, 200, 200);//a
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, 200, -200);//h
	glVertex3f(200, 200, -200);//g
	glEnd();

	glPopMatrix();
}
void Shap_Drow_with_Rotation3() {

	glPushMatrix();
	glRotatef(xRot3, 1.0f, 0.0f, 0.0f);
	glRotatef(yRot3, 0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	//abcd
	glVertex3f(200, 200, 200);//a
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, -200, 200);//c
	glVertex3f(200, -200, 200);//d
	glEnd();

	glBegin(GL_QUADS);
	//adeg
	glVertex3f(200, 200, 200);//a
	glVertex3f(200, -200, 200);//d
	glVertex3f(200, -200, -200);//e
	glVertex3f(200, 200, -200);//g
	glEnd();

	glBegin(GL_QUADS);
	//hgef
	glVertex3f(-200, 200, -200);//h
	glVertex3f(200, 200, -200);//g
	glVertex3f(200, -200, -200);//e
	glVertex3f(-200, -200, -200);//f
	glEnd();

	glBegin(GL_QUADS);
	//bcfh
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, -200, 200);//c
	glVertex3f(-200, -200, -200);//f
	glVertex3f(-200, 200, -200);//h
	glEnd();

	glBegin(GL_QUADS);
	//cdef
	glVertex3f(-200, -200, 200);//c
	glVertex3f(200, -200, 200);//d
	glVertex3f(200, -200, -200);//e
	glVertex3f(-200, -200, -200);//f
	glEnd();

	glBegin(GL_QUADS);
	//abhg
	glVertex3f(200, 200, 200);//a
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, 200, -200);//h
	glVertex3f(200, 200, -200);//g
	glEnd();

	glPopMatrix();
}
void Shap_Drow_with_Rotation4() {

	glPushMatrix();
	glRotatef(xRot4, 1.0f, 0.0f, 0.0f);
	glRotatef(yRot4, 0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	//abcd
	glVertex3f(200, 200, 200);//a
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, -200, 200);//c
	glVertex3f(200, -200, 200);//d
	glEnd();

	glBegin(GL_QUADS);
	//adeg
	glVertex3f(200, 200, 200);//a
	glVertex3f(200, -200, 200);//d
	glVertex3f(200, -200, -200);//e
	glVertex3f(200, 200, -200);//g
	glEnd();

	glBegin(GL_QUADS);
	//hgef
	glVertex3f(-200, 200, -200);//h
	glVertex3f(200, 200, -200);//g
	glVertex3f(200, -200, -200);//e
	glVertex3f(-200, -200, -200);//f
	glEnd();

	glBegin(GL_QUADS);
	//bcfh
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, -200, 200);//c
	glVertex3f(-200, -200, -200);//f
	glVertex3f(-200, 200, -200);//h
	glEnd();

	glBegin(GL_QUADS);
	//cdef
	glVertex3f(-200, -200, 200);//c
	glVertex3f(200, -200, 200);//d
	glVertex3f(200, -200, -200);//e
	glVertex3f(-200, -200, -200);//f
	glEnd();

	glBegin(GL_QUADS);
	//abhg
	glVertex3f(200, 200, 200);//a
	glVertex3f(-200, 200, 200);//b
	glVertex3f(-200, 200, -200);//h
	glVertex3f(200, 200, -200);//g
	glEnd();

	glPopMatrix();
}

void Mahamoud_Drow() {
	glClear(GL_COLOR_BUFFER_BIT);
	for (int i = 1; i <= 4; i++) {
		switch (i) {
		case 1://Left Button
			if (My_Value == 1) {

				glViewport(0, 0, Width / 2, Higth / 2);
				glColor3f(0.0f, 0.0f, 0.0f);
				Shap_Drow_with_Rotation1();
				Check1 = true;
			}
			else {

				glViewport(0, 0, Width / 2, Higth / 2);
				glColor3f(0.0f, 0.0f, 0.0f);
				Shap_Drow_with_Rotation1();
			}
			break;
		case 2://Rigth Button
			if (My_Value == 2) {

				glViewport(Width / 2, 0, Width / 2, Higth / 2);
				glColor3f(1.0f, 1.0f, 1.0f);
				Shap_Drow_with_Rotation2();
				Check2 = true;
			}
			else {
				Check2 = false;
				glViewport(Width / 2, 0, Width / 2, Higth / 2);
				glColor3f(1.0f, 1.0f, 1.0f);
				Shap_Drow_with_Rotation2();
			}

			break;
		case 3://Left Top
			if (My_Value == 3) {
				glViewport(0, Higth / 2, Width / 2, Higth / 2);
				glColor3f(0.0f, 0.0f, 1.0f);
				Shap_Drow_with_Rotation3();
				Check3 = true;
			}
			else {
				Check3 = false;
				glViewport(0, Higth / 2, Width / 2, Higth / 2);
				glColor3f(0.0f, 0.0f, 1.0f);
				Shap_Drow_with_Rotation3();
			}
			break;
		case 4://Rigth Top
			if (My_Value == 4) {
				glViewport(Width / 2, Higth / 2, Width / 2, Higth / 2);
				glColor3f(1.0f, 0.0f, 0.0f);
				Shap_Drow_with_Rotation4();
				Check4 = true;
			}
			else {
				Check4 = false;
				glViewport(Width / 2, Higth / 2, Width / 2, Higth / 2);
				glColor3f(1.0f, 0.0f, 0.0f);
				Shap_Drow_with_Rotation4();
			}
			break;

		}


	}
	glutSwapBuffers();
}
void ChangeSize(GLsizei w, GLsizei h) {
	Width = w;
	Higth = h;
	GLfloat aspectRatio;
	// Prevent a divide by zero
	if (h == 0) h = 1;
	// Set Viewport to window dimensions
	glViewport(0, 0, w, h);
	// Reset coordinate system
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// Establish clipping volume (left, right, bottom, top, near, far)
	aspectRatio = (GLfloat)w / (GLfloat)h;
	float range = 500.0;
	if (w <= h)
	{
		glOrtho(-range, range, -range / aspectRatio, range / aspectRatio, range, -range);
	}
	else
	{
		glOrtho(-range * aspectRatio, range * aspectRatio, -range, range, range, -range);
	}

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void SetUp() {//OldGold = color red 0.81 green 0.71 blue 0.23
	//BrightGold = color red 0.85 green 0.85 blue 0.10
	glClearColor(0.85f, 0.85f, 0.10f, 1.0f);
}
void SpecialKeys1(int key, int x, int y) {

	if (Check1) {
		if (key == GLUT_KEY_UP) xRot1 -= 5.0f;
		if (key == GLUT_KEY_DOWN)  xRot1 += 5.0f;
		if (key == GLUT_KEY_LEFT) yRot1 -= 5.0f;
		if (key == GLUT_KEY_RIGHT) yRot1 += 5.0f;
	}

	if (xRot1 > 356.0f) xRot1 = 0.0f;
	if (xRot1 < -1.0f) xRot1 = 355.0f;
	if (yRot1 > 356.0f) yRot1 = 0.0f;
	if (yRot1 < -1.0f) yRot1 = 355.0f;

	// Refresh the Window
	glutPostRedisplay();
}
void SpecialKeys2(int key, int x, int y) {
	if (Check2) {
		if (key == GLUT_KEY_UP) xRot2 -= 5.0f;
		if (key == GLUT_KEY_DOWN)  xRot2 += 5.0f;
		if (key == GLUT_KEY_LEFT) yRot2 -= 5.0f;
		if (key == GLUT_KEY_RIGHT) yRot2 += 5.0f;
	}
	if (xRot2 > 356.0f) xRot2 = 0.0f;
	if (xRot2 < -1.0f) xRot2 = 355.0f;
	if (yRot2 > 356.0f) yRot2 = 0.0f;
	if (yRot2 < -1.0f) yRot2 = 355.0f;

	// Refresh the Window
	glutPostRedisplay();
}
void SpecialKeys3(int key, int x, int y) {
	if (Check3) {
		if (key == GLUT_KEY_UP) xRot3 -= 5.0f;
		if (key == GLUT_KEY_DOWN)  xRot3 += 5.0f;
		if (key == GLUT_KEY_LEFT) yRot3 -= 5.0f;
		if (key == GLUT_KEY_RIGHT) yRot3 += 5.0f;
	}
	if (xRot3 > 356.0f) xRot3 = 0.0f;
	if (xRot3 < -1.0f) xRot3 = 355.0f;
	if (yRot3 > 356.0f) yRot3 = 0.0f;
	if (yRot3 < -1.0f) yRot3 = 355.0f;

	// Refresh the Window
	glutPostRedisplay();
}
void SpecialKeys4(int key, int x, int y) {
	if (Check4) {
		if (key == GLUT_KEY_UP) xRot4 -= 5.0f;
		if (key == GLUT_KEY_DOWN)  xRot4 += 5.0f;
		if (key == GLUT_KEY_LEFT) yRot4 -= 5.0f;
		if (key == GLUT_KEY_RIGHT) yRot4 += 5.0f;
	}
	if (xRot4 > 356.0f) xRot4 = 0.0f;
	if (xRot4 < -1.0f) xRot4 = 355.0f;
	if (yRot4 > 356.0f) yRot4 = 0.0f;
	if (yRot4 < -1.0f) yRot4 = 355.0f;

	// Refresh the Window
	glutPostRedisplay();
}
void ProcessMenu(int value) {
	My_Value = value;
	glutPostRedisplay();
	switch (value)
	{
	case 1:glutSpecialFunc(SpecialKeys1); break;
	case 2:glutSpecialFunc(SpecialKeys2); break;
	case 3:glutSpecialFunc(SpecialKeys3); break;
	case 4:glutSpecialFunc(SpecialKeys4); break;
	}
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Mahmoud Alyosify's Task");
	glutDisplayFunc(Mahamoud_Drow);
	glutSpecialFunc(SpecialKeys1);
	glutReshapeFunc(ChangeSize);
	// Create the Menu
	glutCreateMenu(ProcessMenu);
	glutAddMenuEntry("ViewPort Left Button", 1);
	glutAddMenuEntry("ViewPort Rigth Button", 2);
	glutAddMenuEntry("ViewPort Left Top", 3);
	glutAddMenuEntry("ViewPort Rigth Top", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	SetUp();
	glutMainLoop();
	return 0;
}