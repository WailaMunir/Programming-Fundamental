#include<iostream>
using namespace std;
main()
{
string name;
int matric;
int intermediate;
int Ecat;
cout<<"Enter name";
cin >> name;

cout<<"Enter matric marks";
cin >> matric;

cout<<"Enter intermediate";
cin >> intermediate;

cout<<" Enter Ecat";
cin >> Ecat;

float mat,inter,ecat,Aggregate;

mat = matric*10/1100;
inter = intermediate*40/550;
ecat = Ecat*50/400;

Aggregate = mat + inter + ecat;

cout<<"Aggregate score"<<Aggregate;
}
