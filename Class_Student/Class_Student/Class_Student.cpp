#include <iostream>
#include"Class.h"
using namespace std;
int main()
{
    Student *a;
    while(true)
    {
        a = new Student;
        a->Input();
        if (a->Grade == 6 || a->Grade == 7)
            {
                ((Grade6_7*)a)->Input();
                ((Grade6_7*)a)->Average();
                ((Grade6_7*)a)->Output();
            }
        if (a->Grade == 8 || a->Grade == 9)
            {
                ((Grade8_9*)a)->Input();
                ((Grade8_9*)a)->Average();
                ((Grade8_9*)a)->Output();
            }
        if (a->Grade == 10 || a->Grade == 11 || a->Grade==12)
        {
            ((Grade10_11_12*)a)->Input();
            ((Grade10_11_12*)a)->Average();
            ((Grade10_11_12*)a)->Output();
        }
    }

}

