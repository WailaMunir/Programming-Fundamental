#include<iostream>
using namespace std;
main()
{
    float due;
    int quarter,dime,nickel, penny;
    cout << "enter the number of quarter:";
    cin >> quarter;
    cout << "enter the number of dime:";
    cin >> dime;
    cout << "enter the number of nickel:";
    cin >> nickel;
    cout << " enter the number of penny :";
    cin >> penny;
    cout << "enter the total dues:$";
    cin >> due;
    float arr[4];
    float sum = 0;
     sum = (quarter * 0.25) + (dime * 0.10) + (nickel * 0.05) + (penny * 0.01);
     if( sum >= due){
        cout << "true";
     }
     else{
        cout <<"false";
     }
    }