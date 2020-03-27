#include<iostream>
#include"Class.h"
#include<string>
using namespace std;
void Grade6_7::Init(string str, float a,float b,float c)
{
	strName = str;
	fMath = a; fLit = b; fGDCD = c;
}
void Grade8_9::Init(string str, float a, float b, float c, float d)
{
	strName = str;
	fMath = a; fLit = b; fPhy = c; fChem = d;
}
void Grade10_11_12::Init(string str, float a, float b, float c)
{
	strName = str;
	fMath = a; fLit = b; fEng = c;
}
string Student::to_string()
{
	stringstream ss;
	if (Grade == 6 || Grade == 7)
	{
		ss << "Name: " << strName << ", Grade: " << Grade << ", Math: " << fMath << ", Literater: " << fLit << ", GDCD: " << fGDCD<<", Ave: "<<AveScore;
		return ss.str();
	}
	if (Grade == 9 || Grade == 8)
	{
		stringstream ss;
		ss << "Name: " << strName << ", Grade: " << Grade << ", Math: " << fMath << ", Literater: " << fLit << ", Physic: " << fPhy << ", Chemistry: " << fChem << ", Ave: " << AveScore;
		return ss.str();
	}
	if (Grade == 10 || Grade == 11 || Grade == 12)
	{
		ss << "Name: " << strName << ", Grade: " << Grade << ", Math: " << fMath << ", Literater: " << fLit << ", English: " << fEng << ", Ave: " << AveScore;
		return ss.str();
	}
}
