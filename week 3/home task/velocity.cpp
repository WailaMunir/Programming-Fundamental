#include<iostream>
using namespace std;
main()
{
int velocity1;
int acceleration;
int time;
int velocity2;
cout <<"Enter initial velocity:";
cin >> velocity1;
cout <<"Enter acceleration :";
cin >> acceleration;
cout << "Enter time :";
cin >> time ;
velocity2 = acceleration * time + velocity1;
cout<<"final Velocity of car :"<<velocity2;
}
