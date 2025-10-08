
#include <iostream>
#include "clsInputValidate.h"
using namespace std;
int main()
{
    cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl;
    cout << clsInputValidate::IsNumberBetween(4.8, 1.8, 7.9) << endl;
    cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(1, 10, 2025), clsDate(1, 1, 2030))<<endl;
    cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(1, 1, 2030), clsDate(1, 10, 2025)) << endl;
    cout << "\nPlease Enter Number: ";
    int x = clsInputValidate::ReadIntNumber("Invalid Number, Please Enter Again: ");
    cout << x << endl;

    int intNum = clsInputValidate::ReadIntBetween(5, 10, "Invalid Number, Please Enter Again: ");

    cout << intNum << endl;
    //string x = "aca";
    //cout<< x == isnan

}
