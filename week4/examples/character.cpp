#include<iostream>
using namespace std;
main()
{
    char ch;
    string alphabts= "aeiou";
    cout <<"enter any character";
    cin >> ch;
    if(ch != alphabts ){
        cout << " it is consonant";
    }
    else if(ch == alphabts ){
        cout <<"it is vowel";
    }
    else{
        cout <<"it is a number";
    }
    }