#include<iostream>
using namespace std;
main()
{
    float speed;
    cout <<"enter the speed :";
    cin >> speed;
    if(speed <=10){
        cout <<"slow speed";
    } 
   else if(speed <=50){
        cout <<"average speed";
    }
    else if(speed <=150){
        cout <<"ultra fast speed";
    }
    else if(speed <=1000){
        cout <<"extremely fast speed";
    }
}