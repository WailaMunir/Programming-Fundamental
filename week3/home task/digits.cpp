#include<iostream>
using namespace std;
main()
{
int digits;
int sum;
int num1;
int num2;
int num3;
int num4;
cout <<"Enter 4_digit number:";
cin >>digits;
num1   = digits % 10;
digits = digits / 10;
num2   = digits % 10;
digits = digits / 10;
num3   = digits % 10;
digits = digits / 10;
num4   = digits % 10;
sum = num1 + num2 + num3 + num4;
cout << "the sum of 4_digit number" << sum;
}


