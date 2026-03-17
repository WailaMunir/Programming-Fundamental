#include<iostream>
using namespace std;
main()
{
    int money,year;
    int age,totalspend=0;
    int difference;
    cout <<"enter the money:";
    cin>>money;
    cout <<"entwe the year:";
    cin>>year;
    for(int i = 1800;i <= year; i++){
       age = 18 + (i - 1800);
       if(i % 2 == 0){
        totalspend += 12000;
       }
       else{
        totalspend += 12000 + (50 * age);
       }
    }
    difference = money - totalspend;
    if (money > totalspend){
        cout <<"Yes! he will live care free life and wil have"<<difference<<"dollars left";
    }
    else {
        cout <<"No! he will need"<<-difference<<"dollars to survive";
    }
}