#include<iostream>
using namespace std;
main()
{
float megabites,kilobites,bytes;
float bits;
cout<<"Enter megabites";
cin>>megabites;
kilobites = megabites * 1024;
bytes = kilobites * 1024;
bits = bytes * 8;
cout<<"valu in bits:"<<bits;
}