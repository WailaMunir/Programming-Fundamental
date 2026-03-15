#include<iostream>
using namespace std;
main()
{
    float area;
    string figure;
    cout <<"name of figure:";
    cin >>figure;     
    if(figure == "square"){
         
         float side;
        cin >> side ;
        area = side * side;
        
    }
    else if (figure == "rectangle"){
         
         float length,width;
        cin >> length;
        cin >> width ;
        area = length * width;
        
    }
    else if (figure =="circle"){
         
        float radius,pi = 3.14;
        cin >> radius ;
        area = pi * radius *radius;
    }  
    else if (figure == "triangle"){
        
       float base,hight;
        cin >> base;
        cin >> hight;
        area = 1/2 * (base * hight);
         }
         cout <<"area = "<< area;
}