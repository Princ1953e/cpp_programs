#include<iostream>
using namespace std;

int main()
{
    int no1,no2,no3,no4;

    cout << "Enter The Num 1 , 2 , 3 , 4"<<endl;
    cin >>no1 >>no2 >>no3 >>no4 ;

    if(no1>no2)
    {
       if(no1>no3)
       {
            if(no1>no4)
            {
                cout << "Num 1 is big" <<endl;
            }
            else{
                cout << "Num 4 is big" <<endl;
            }
       }
       else
       {
        if(no3>no4)
            {
                cout << "Num 3 is big" <<endl;
            }
            else
            {
                cout << "Num 4 is big" <<endl;
            }
       }
    }
    else
    {
        if(no2>no3)
        {
            if(no2>no4)
            {
                cout << "Num 2 is big" <<endl;
            }
            else
            {
                cout << "Num 4 is big" <<endl;               
            }
        }
        else{
             if(no3>no4)
                {
                    cout << "Num 3 is big" <<endl;
                }
            else
                {
                    cout << "Num 4 is big" <<endl;
                }
        }
    }
}