#include<iostream>
using namespace std;
main()
{  
    int n;
    cout <<"enter the number n:";
    cin >> n;
    if(n <= 0){
        cout<<"invalid input, number of element must be greater than 0."<<endl;
    }
    int arr[n];
    cout << "enter"<<n<<"number, one per line:"<<endl;
    for(int i = 0;i < n ;i = i+1){
        cin >> arr[i];  
    }
    cout <<"number in reverse order";
    for (int i = n ;i >= 0;i--){
        cout << arr[i]<<endl;
    }
    cout <<endl;      
}