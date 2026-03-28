#include<iostream>
using namespace std;
main()
{
int i;
float p;
int chance;
cout << "Enter imposter:";
cin >> i;
cout << "Enter players :";
cin >> p;
chance = (i / p) *100;
cout <<"chances :"<<chance<<"%";
}

