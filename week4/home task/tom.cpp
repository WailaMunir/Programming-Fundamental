#include<iostream>
using namespace std;
main()
{
    int holidays,gametime,workingdays,difference;
    int hours ,mints;
    int gametimeWD = 63;
    int gametimeHD = 127;
    cout <<"enter the number of holidays:";
    cin>>holidays;
    workingdays = 365-holidays;
    gametime = (workingdays * gametimeWD) + ( holidays *gametimeHD);
    if (gametime > 30000){
    difference = 30000 - gametime;
    hours = difference / 60;
    mints = difference % 60;
    cout << "tome will run away"<<hours<<"hours"<<mints<<"mints" ;
}
else{
    difference = 30000 - gametime;
    hours = difference / 60;
    mints = difference % 60;
    cout <<"tom will sleep well:"<<hours<<"hours"<<mints<<"mints" ;
}
}