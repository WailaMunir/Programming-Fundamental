#include<iostream>
using namespace std;
main()
{
int hours,mints;
int seconds;
cout <<"Enter time in hours";
cin >> hours;
mints = hours * 60;
seconds = mints * 60;
cout<<"time in seconds"<<seconds;
}