#include<iostream>
using namespace std;
int main(){

    char c;

    cout << "Enter The Character" <<endl;
    cin >> c;

    switch(c){

        case 'M':
            cout << "Monday" ;
            break;
        case 't': cout << "tuseday" ; break;
        case 'W': cout << "Wendsday" ; break;
        case 'T': cout << "Thursday" ; break;
        case 'F': cout << "friday" ; break;
        case 'S': cout << "Saturday" ; break;
        case 's': cout << "Sunday" ; break;
        default: cout << "Error !!";
    }
}