#include<iostream>
using namespace std;
main()
{
    int number[5];
    for(int count = 0; count < 5;count = count +1){
        cout <<"Enter number: ";
        cin >> number[count];
    }
    cout <<"the 1st element in array is: "<<number[0]<<endl;
    cout <<"the 2nd element in array is: "<<number[4]<<endl;
}