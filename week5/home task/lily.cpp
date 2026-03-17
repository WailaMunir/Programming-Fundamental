#include<iostream>
using namespace std;
main()
{
    int lilyage;
    int machineprice;
    int unitprice;
    float giftmoney = 10.0;
    int toys = 0,toyprice,savedmoney = 0;
    cout <<"enter the lily age:";
    cin >>lilyage;
    cout << "enter the machine price:";
    cin >>machineprice;
    cout << "enter the unit price:";
    cin >> unitprice;
    for(int i = 1;i <=lilyage;i++){
        if(i % 2 == 0){
        savedmoney +=giftmoney;
        savedmoney -=1.0;
        giftmoney += 10.0;
        }
        else{
            toys++;
        }
        
        savedmoney += toys * toyprice;
    }
        if (savedmoney >= machineprice){
            cout << "yes!";
            cout <<(savedmoney - machineprice)<<endl;
        }
        else{
            cout << "no!";
            cout <<(savedmoney - machineprice)<<endl;
        }
        }
    