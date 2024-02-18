#include<iostream>
using namespace std;
int main()
{
    int add,sub,fact,division,modual,no1,no2;

    cout << "Enter The Value Of Number 1"<< endl;
    cin >> no1;

    cout << "Enter The Value Of Number 2"<<endl;
    cin >> no2;

    add=no1+no2;
    sub=no1-no2;
    fact=no1*no2;
    division=no1/no2;
    modual=no1%no2;

    cout << "Your Addition Is = "<< add  <<endl ;
    cout << "Your Subtraction Is = "<< sub  <<endl ;
    cout << "Your Multiplication Is ="<< fact  <<endl ;
    cout << "Your Division Is = "<< division  <<endl ;
    cout << "Your Modulor Is =" << modual <<endl ;
}