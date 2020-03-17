#include <iostream>
#include"Class.h"
#include<vector>
using namespace std;
int main()
{
    Student* a;
    a = new Student[100];
    for (int i = 0; i < 100; i++)
    {
        a->Input();
        if (a->Grade == -1)
        {
            break;
        }
        float av=Check(a);
        cout << "Average Score: " << av<<endl;
        
    }
    

}

