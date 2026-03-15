#include<iostream>
using namespace std;
main()
{
    string country;
    int ticketprice;
    float totalprice;
    float discount;
    cout << "enter the country name:";
    cin >> country;
    cout << "enter the ticket price:";
    cin >> ticketprice;
    if(country =="ireland"){
        discount = ticketprice * 10/100;
        totalprice = ticketprice - discount;
        cout << "the discount price is:"<<totalprice;
    }
    else{
        discount = ticketprice * 5/100;
        totalprice = ticketprice - discount;
        cout << "the discount price is:"<<totalprice;
    }
}