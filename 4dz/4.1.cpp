#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	fstream File;

	File.open("file4.txt");

	int sum = 0;
	string line;

	setlocale(LC_ALL, "rus");
	int  x;
	int i = 0; // �������� ����� � ������ ����� � ����
	ofstream fout("file4.txt");
	cout << "������� ������ " << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> x;
		fout << x << endl;
	}

	fout.close();

	while (getline(File, line))  //��������� ������ ���� ��� ��������
	{
		sum = sum + 1;   // stoi() ������������ ������ � �����
 	}
	File.close();

	cout << "�����: " << sum;
	return 0;
}
