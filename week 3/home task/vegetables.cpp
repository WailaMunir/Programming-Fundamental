#include<iostream>
using namespace std;
main()
{
float vegprice;
float fruitprice;
int vegetables;
int fruits;
float earning;
float totalprice;
cout <<"Enter the vegetable price per kilogram (in coins):";
cin >> vegprice;

cout <<"Enter the furits price per kilogram ( in coins ):";
cin >> fruitprice;

cout <<"Enter total kilogram of vegetables:";
cin >> vegetables;

cout << "Enter total kilogram of fruits :";
cin >> fruits;

totalprice = (vegprice * vegetables) + (fruitprice * fruits);
earning = totalprice / 1.94;
cout <<" total earning in rupees:"<<earning;
} 
