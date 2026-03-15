#include<iostream>
using namespace std;
main()
{
    string password1,password2;
    password1 = "word@1122";
    cout <<"enter the first password:";
    cin>>password2;
    if (password2 == password1){
        cout <<"wow ! you have cracked the code";
    }
    else{
        cout <<"it is not the same ,try again";
    }
    }

