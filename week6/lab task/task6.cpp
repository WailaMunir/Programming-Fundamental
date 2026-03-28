#include<iostream>
using namespace std;
main()
{
    int sum = 0;
    float average = 0;
    int number[5] = {1,2,3,4,5};
    for(int x = 0;x < 5;x = x+1)
    {
        sum = sum + number[x];
    }
    average = sum/5;
    cout << "sum:"<<sum <<endl;
    cout << "average:"<<average<<endl;
}