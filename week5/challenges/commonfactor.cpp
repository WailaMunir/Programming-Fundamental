#include<iostream>
using namespace std;
main()
{
    int num1 ,a,b,gcd,lcm;
    int num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    a = num1;
    b = num2;
    while(b != 0){
        int temp = b;
        b = a % b; 
        a = temp;   
    }
    gcd = a;
    lcm = (num1 * num2) /gcd;
    cout << "GCD"<<gcd<<endl;
    cout << "LCM"<<lcm<<endl;
    
}