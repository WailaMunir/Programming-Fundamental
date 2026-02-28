#include<iostream>
using namespace std;
main()
{
int wins;
int draws;
int losses;
int points;
cout<<"enter wins";
cin >> wins;
cout<<"enter draws";
cin >> draws;
cout <<"enter losses";
cin >> losses;
points = (3*wins)+(1*draws)+(0*losses);
cout<<"total points"<<points;
}