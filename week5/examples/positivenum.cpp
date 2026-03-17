#include<iostream>
using namespace std;
main()
{
    int value;
    cout <<"enter the positive number:";
    cin >> value;
    while(value <= 0)
    {
        cout << "error:"<< value <<"is not a positive number:"<<endl;
        cout << "please enter the positive number:";
        cin >> value;
    }
    cout << "program end"<<endl;
}