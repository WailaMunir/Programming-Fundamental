#include<iostream>
using namespace std;
main()
{
    int n;
    int count;
    cout << "Enter the number:";
     cin >> n;
     int arr[n];
     cout <<"enter"<< n <<"number";
     for(int i =0;i < n; i++){
       cin >> arr[i];
    }
    for(int i = 0;i < n; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    cout <<"total even numbers:"<<count;
}