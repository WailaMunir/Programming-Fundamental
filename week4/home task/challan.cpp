#include<iostream>
using namespace std;
main()
{
    int speed;
    float limit;
    cout <<"enter the speed:";
    cin >> speed;
    if(speed > 100){
        cout <<"you will be challaned!";
    }
    else if(speed <= 100){
        cout <<"you are going good!";
    }

}