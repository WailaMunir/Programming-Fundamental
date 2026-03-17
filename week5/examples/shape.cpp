#include<iostream>
using namespace std;
main()
{
    int i,j,row;
    cout << "input number of rows:";
    cin >> row;
    for(i = 1;i <= row; i++){
        for(j = 1;j <= i;j++)
        cout <<"*";
        cout <<"\n";
    }
}