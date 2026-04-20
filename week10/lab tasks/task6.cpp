#include<iostream>
#include<conio.h>
using namespace std;
char Alphabetcase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"You have entred capital character "<<ch;
    }
    else{
        cout<<"You have enter small character "<<ch;
    }
}

main()
{
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    cout<<Alphabetcase(ch);

}