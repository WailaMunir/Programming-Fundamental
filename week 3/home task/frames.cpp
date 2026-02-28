#include<iostream>
using namespace std;
main()
{
int frames;
int mints;
int seconds;
int fps;
cout<<"number of mints";
cin >> mints;
cout<<"frame per second";
cin >> fps;
seconds = mints * 60 ;
frames = seconds *fps;
cout<<"total no of frames"<<frames;
}