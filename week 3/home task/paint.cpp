#include<iostream>
using namespace std;
main()
{
int n;
int w;
int h;
int walls;
cout << "number of square meter you paint :";
cin >> n;
cout << "width of wall ( in meters):";
cin >> w;
cout << "hight of wall ( in meters):";
cin >> h;
walls = n / (h * w) ;
cout << " number of walls you can paint :"<<walls;
}