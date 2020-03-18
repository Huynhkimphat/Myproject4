#include<iostream>
#include"Class.h"
#include<string>
using namespace std;
void Grade6_7::Init(string str, float a,float b,float c)
{
	s = str;
	fMath = a; fLit = b; fGDCD = c;
}
void Grade8_9::Init(string str, float a, float b, float c, float d)
{
	s = str;
	fMath = a; fLit = b; fPhy = c; fChem = d;
}
void Grade10_11_12::Init(string str, float a, float b, float c)
{
	s = str;
	fMath = a; fLit = b; fEng = c;
}