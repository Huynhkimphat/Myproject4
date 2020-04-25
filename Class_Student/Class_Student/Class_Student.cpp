#include <iostream>
#include"Class.h"
#include<vector>
#include<string>
#include<math.h>
using namespace std;
void Input(int iX, string& k, float& fMa,float& fLi,float& fGd,float& fCh,float& fPh,float& fEn)
{
    cout << "Input Name: ";
    cin.ignore();
    getline(cin, k);
    switch (iX)
    {
    case 6:
    case 7:
        cout << "Input Math Score: ";
        cin >> fMa;
        cout << "Input Literature Score: ";
        cin >> fLi;
        cout << "Input GDCD Score: ";
        cin >> fGd;
        break;
    case 8:
    case 9:
        cout << "Input Math Score: ";
        cin >> fMa;
        cout << "Input Literature Score: ";
        cin >> fLi;
        cout << "Input Physic Score: ";
        cin >> fPh;
        cout << "Input Chemistry Score: ";
        cin >> fCh;
        break;
    default:
        cout << "Input Math Score: ";
        cin >> fMa;
        cout << "Input Literature Score: ";
        cin >> fLi;
        cout << "Input English Score: ";
        cin >> fEn;
        break;
    }
}

int main()
{
    string k; float a, b, c, d, e, f;
    vector<Student> vtStudents;
    while (true)
    {
        string StrName;
        int iGrade;
        cout << "Input Grade: ";
        cin >> iGrade;
        
        if (iGrade == -1)
        {
            break;
        }
        else
        { 
            if (iGrade == 6 || iGrade == 7)
            {
                Grade6_7 obj; obj.Grade = iGrade;
                Input(iGrade,k,a,b,c,d,e,f);
                obj.Init(k, a, b, c);
                obj.Average();
                vtStudents.push_back(obj);
                
            }
            if (iGrade == 8 || iGrade == 9)
            {
                Grade8_9 obj; obj.Grade = iGrade;
                Input(iGrade, k, a, b, c, d, e, f);
                obj.Init(k, a, b, d, e);
                obj.Average();
                vtStudents.push_back(obj);
            }
            if (iGrade == 10 || iGrade == 11 || iGrade == 12)
            {
                Grade10_11_12 obj; obj.Grade = iGrade;
                Input(iGrade, k, a, b, c, d, e, f);
                obj.Init(k, a, b, f);
                obj.Average();
                vtStudents.push_back(obj);
            }
        }
        
    }
    for (int i = 0; i < vtStudents.size(); i++)
    {
        string stringout=vtStudents[i].to_string();
        cout << stringout << endl;
        
    }
    return 0;
}

