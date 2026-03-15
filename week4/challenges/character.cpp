#include<iostream>
using namespace std;
main()
{
    char ch;
    string alphabts;
    cout <<"enter any character:";
    cin >> ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << " it is vowels";
    }
    else if((ch >= 'a' && ch <='z' ) ||(ch >= 'A' && ch <='Z')){
        cout <<"it is consonents";
    }
    else if(ch >= '0' && ch <='9' ){
        cout <<"it is a number";
    }
    }