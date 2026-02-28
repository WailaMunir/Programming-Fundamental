#include<iostream>
using namespace std;
main()
{
int n;
int w;
int h;
int totalwalls;
cout << " Enter the paint area:";
cin >> n;
cout << "Enter the width:";
cin >> w;
cout << "Enter the hight :";
cin >> h;
totalwalls = n / (w * h );
cout << " total walls painted :"<<totalwalls;
}

