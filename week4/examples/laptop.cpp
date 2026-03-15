#include<iostream>
using namespace std;
main()
{
    int salary = 10000;
    int laptop = 50000;
    float advance ;
    int months = 6;
    float required_months;
        advance = salary * 0.5 * months;
    if(advance >= laptop){
        cout <<"ali can buy a laptop";
    }
    else{
        required_months = laptop /(salary*0.5);
    cout <<"required months salary"<<required_months;
    }
    }