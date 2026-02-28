#include<iostream>
using namespace std;
main()
{
int fps;
float mints;
int totalframes;
cout <<"Enter the number of frames:";
cin >> fps;
cout << "Enter the number of mints per second :";
cin >> mints;
totalframes = mints * 60 * fps;
cout << " total number of frames :"<<totalframes;
}
