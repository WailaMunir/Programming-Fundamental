#include<iostream>
using namespace std;
main()
{
    int n , sum = 0;
    cout <<"enter the number of element:";
    cin >> n ;
    int arr[n];
    cout<<"enter"<<n<<"numbers:";
    for(int i =0;i < n; i++){
       cin >> arr[i];
       sum = sum + arr[i];
    }
     
     cout << "sum of all elements:"<< sum <<endl;
}