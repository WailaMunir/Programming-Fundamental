#include<iostream>
#include<cmath>
using namespace std;
float calculatehight(float distance,float angle){
     float radian = angle * (3.14 /180);
    return distance * tan(radian);
}

main()
{
    float distance,hight,angle;
    cout<<"Enter the distance:";
    cin>>distance;
    cout<<"Enter the angle:";
    cin>>angle;
    hight = calculatehight(distance , angle);
    cout<<"Hight of tree is :"<<hight;
}