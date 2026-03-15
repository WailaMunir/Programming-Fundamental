#include<iostream>
using namespace std;
main()
{
int num1,num2;
char operators; 
cout <<"enter the first number";
cin>> num1;
cout <<"enter the operator";
cin >> operators;
cout <<"enter the second number";
cin >> num2;
if(operators == '-' ){
    cout <<"add"<<num1 - num2;
}
if(operators == '+'){
    cout<<"subtract"<<num1 + num2;
}
if(operators == '*'){
    cout<<"divide"<<num1 / num2;
}
if(operators == '/'){
    cout << "multiply"<<num1 * num2;
}
}