#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int num1,num2;
    int result;
    cout<<"Enter number1:";
    cin>>num1;
    cout<<"Enter number2:";
    cin>>num2;
    result = min(num1,num2);
    cout<<"minimum number is "<< result;
}