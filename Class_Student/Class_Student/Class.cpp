#include<iostream>
#include"Class.h"
#include<string>
using namespace std;
void Student::Input()
{
	cout << "Name: ";
	cin.ignore();
	getline(cin, s);
	cout << "Grade: ";
	cin >> Grade;

}
void Grade6_7::Input()
{
	{
		cout << "Input Math Score: ";
		cin >> fMath;
		cout << "Input Literature Score: ";
		cin >> fLit;
		cout << "Input GDCD Score: ";
		cin >> fGDCD;

	}
}
void Grade8_9::Input()
{
	cout << "Input Math Score: ";
	cin >> fMath;
	cout << "Input Literature Score: ";
	cin >> fLit;
	cout << "Input Physic Score: ";
	cin >> fPhy;
	cout << "Input Chemistry Score: ";
	cin >> fChem;

}
void Grade10_11_12::Input()
{
	{
		cout << "Input Math Score: ";
		cin >> fMath;
		cout << "Input Literature Score: ";
		cin >> fLit;
		cout << "Input English Score: ";
		cin >> fEng;
	}
}
float Check(Student* a)
{
	if (a->Grade == 6 || a->Grade == 7)
	{
		a = new Grade6_7;
		a->Input();
		float av=a->Average();
		return av;
	}
	if (a->Grade == 8 || a->Grade == 9)
	{
		a = new Grade8_9;
		a->Input();
		float av = a->Average();
		return av;
	}
	if (a->Grade == 10 || a->Grade == 11||a->Grade==12 )
	{
		a = new Grade10_11_12;
		a->Input();
		float av = a->Average();
		return av;
	}
}