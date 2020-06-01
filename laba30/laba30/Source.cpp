#include <glut.h>
#include "Tree.h"
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;
int winW = 1920;
int winH = 1080;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	glutInit(&argc, argv);
	cout << "������ '+' ��������� ������� � ������, ���� �������� ���, ���� �� ����, �� ������� ��� �� ������." << endl;
	cout << "������ '-' ������� �������� ������� �� ������, ���� �� ����������." << endl;
	cout << "��������� ����������������� ������ �������� 7" << endl;

	drawTree(winW, winH, 5, 7);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(winW, winH);
	glutCreateWindow("�������� ������ ��������� Open GL");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutPassiveMotionFunc(mouseMove);
	glutMouseFunc(mouseClick);
	glutMainLoop();


}