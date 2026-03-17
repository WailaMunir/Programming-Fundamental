#include<iostream>
using namespace std;
main()
{
    int i,num;
    int digit;
    int frequency = 0;
    cout<<"enter the number:";
    cin>>num;
    cout <<"enter the digit:";
    cin>>digit;
    i = num;
    while(i > 0){
        if (i % 10 == digit){
        frequency++;
    }
    i = i / 10;
}
cout <<"frequency of "<<digit<<"in"<<num<<"is:"<<frequency;
}