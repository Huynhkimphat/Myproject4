#include<iostream>
#include<string.h>
#include <string>
using namespace std;
class Student
{
private:
	string s;
protected:
	float fMath, fLit;
public:
	int Grade;
	float AveScore=0;
	void Input()
	{
		cout << "Name: ";
		cin.ignore();
		getline(cin, s);
		cout << "Grade: ";
		cin >> Grade;
		cout << "Input Math score: ";
		cin >> fMath;
		cout << "Input Literature score: ";
		cin >> fLit;
	}
	void Average()
	{
		AveScore = (fMath + fLit) / 2;
	}
	
	

};
class Grade6_7:public Student
{
private:
	float fGDCD;
public:
	void Input()
	{
		cout << "Input GDCD Score: ";
		cin >> fGDCD;
		
	}
	void Average()
	{
		AveScore = 0;
		AveScore = (fMath + fLit + fGDCD)/3;
	}
	void Output()
	{
		cout << "Average Score: " << AveScore << endl;
	}
};
class Grade8_9 :public Student
{
private:
	float fPhy,fChem;
public:
	void Input()
	{
		cout << "Input Physic Score: ";
		cin >> fPhy;
		cout << "Input Chemistry Score: ";
		cin >> fChem;

	}
	void Average()
	{
		AveScore = 0;
		AveScore = (fMath + fLit + fPhy+fChem) / 4;
	}
	void Output()
	{
		cout << "Average Score: " << AveScore << endl;
	}
};
class Grade10_11_12 : public Student
{
private:
	float fEng;
public:
	void Input()
	{
		cout << "Input English Score: ";
		cin >> fEng;
	}
	void Average()
	{
		AveScore = 0;
		AveScore = (fMath + fLit + fEng) / 3;
	}
	void Output()
	{
		cout << "Average Score: " << AveScore << endl;
	}
};

