#include<iostream>
using namespace std;

int main()
{
    // Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%

    int bs,s;
    float  HRA=10%, DA=5%, TA=8%;

    cout << "Enter The Base Salary" << endl;
    cin >> s;

    bs= s + HRA + DA + TA;
    
    cout << endl << bs;

}
