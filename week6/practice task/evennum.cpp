#include<iostream>
using namespace std;
main()
{
    int n;
     cout << "enter the number of array:";
    cin >> n;
    cout <<"enter"<<n<<"elements of array";
      int arr[n];
    for(int i = 0;i < n; i++){
    cin >> arr[i];
    }
    bool special = true;
    for(int i = 0;i < n; i++){
        if(i % 2 == 0){
            if(arr[i] % 2 != 0){
                special = false;
                break;
            }
        }
        else if(arr[i] % 2 == 0){
            special = false;
            break;
        } 
        }
        if(special){
            cout << "the array is special";}
            else{
        cout << "the array is not special";}
    }
    
    