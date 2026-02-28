#include<iostream>
using namespace std;
main()
{
float poundprice;
float areaprice;
float weight;
cout << "enter the weight of fertilizer bag in pounds:";
cin >> weight;
float cost;
cout << "enter the cost of the bag:$";
cin >> cost;
float area;
cout << "enter the area in square feet that bag covers:";
cin >> area;
poundprice = cost / weight;
areaprice = cost / area;
cout << "price of fatilizer per pound:$"<<poundprice<<endl;

cout<< "price of area per square foot:$"<<areaprice;
}
 

