#include<iostream>
using namespace std;
main()
{
    int redrose,whiterose,tulips;
    float redrose_price = 2.00;
    float whiterose_price = 4.10;
    float tulips_price = 2.50;
    float totalprice;
    float discount;
    float originalprice;
    cout <<"number of red roses:";
    cin >>redrose;
    cout <<"number of white roses:";
    cin >>whiterose;
    cout <<"number tulips:";
    cin >>tulips;
    originalprice = (redrose * redrose_price)+(whiterose * whiterose_price)+(tulips * tulips_price);
    if(originalprice > 200){
        discount = originalprice * 0.20;
        totalprice = originalprice - discount;
        cout <<"original price: $"<<originalprice <<endl;
        cout <<"total price after 20% discount:"<<totalprice;
    }
    else{
        cout <<"original price:"<<originalprice;
    }

}