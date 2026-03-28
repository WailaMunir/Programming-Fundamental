#include<iostream>
using namespace std;
main()
{
    int value;
    int rt;
    int arr[rt];
    float sum = 0;
    cout <<"Enter the number of resistore:";
    cin >> rt;
     float resistor[rt];
    cout <<"Enter the resistance value (in ohm) of the "<< rt <<"resistors, one per line:"<<endl;
    for(int i = 0;i < rt; i++){
        cout <<"resistor"<<i +1<<"value in ohms";
        cin >> resistor[i];
        sum = sum + resistor [i];
    }
    cout <<"total resistance (RT) of series circuit is "<<sum<<"ohms"<<endl;
}