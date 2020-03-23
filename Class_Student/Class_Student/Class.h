#include<iostream>
#include<string.h>
#include <string>
using namespace std;
class Student
{
public:
	string s;
	float AveScore;
	int Grade;
	float fMath, fLit, fGDCD, fPhy, fChem, fEng;
	virtual float Average()
	{
		return AveScore = (fMath + fLit) / 2;
	}
};
class Grade6_7:public Student
{
public:
	void Init(string, float, float, float);
	float Average()
	{
		 return AveScore = (fMath + fLit + fGDCD)/3;
	}
};
class Grade8_9 :public Student
{
public:
	void Init(string, float, float, float,float);
	float Average()
	{
		return AveScore = (fMath + fLit + fPhy+fChem) / 4;
	}
};
class Grade10_11_12 : public Student
{
public:
	void Init(string, float, float, float);
	float Average()
	{
		return AveScore = (fMath + fLit + fEng) / 3;
	}
};