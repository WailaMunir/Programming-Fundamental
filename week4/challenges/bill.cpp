#include<iostream>
using namespace std;
main()
{
    int bill;
    float discount,totalamount;
    cout <<"enter the bill:";
    cin >>bill;
    if(bill<=5000){
        discount = bill *0.05;
    }
    if ( bill > 5000){
        discount = bill *0.10;
    }
totalamount = bill - discount;
    cout<<" your discount bill is:"<<totalamount;
    }