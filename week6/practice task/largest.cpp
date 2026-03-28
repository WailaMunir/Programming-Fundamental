#include<iostream>
using namespace std;
main()
{
    int n ,num;
    int largest;
    cout <<"enter the number of elements:";
    cin >> n;
    int arr[n];
    cout <<"Enter"<<  n <<"number, one per line:"<<endl;
    for(int i = 0;i < n; i++){
        cout <<"enter number"<<i +1<<":";
          cin >> num;
          if(i == 0){
            largest = num;
          }
          else if(num > largest){
            largest = num;
          }
    }
         cout << "the largest number entered is :"<<largest<<endl;
}