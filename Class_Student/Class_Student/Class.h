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
	float AveScore;
	int Grade;
	virtual void Input();
	virtual float Average()
	{
		return AveScore = (fMath + fLit) / 2;
	}
};
class Grade6_7:public Student
{
private:
	float fGDCD;
public:
	void Input();
	float Average()
	{
		 return AveScore = (fMath + fLit + fGDCD)/3;
	}
};
class Grade8_9 :public Student
{
private:
	float fPhy,fChem;
public:
	void Input();
	float Average()
	{
		return AveScore = (fMath + fLit + fPhy+fChem) / 4;
	}
};
class Grade10_11_12 : public Student
{
private:
	float fEng;
public:
	void Input();
	float Average()
	{
		return AveScore = (fMath + fLit + fEng) / 3;
	}
};

float Check(Student* a);