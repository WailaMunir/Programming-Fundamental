#include<iostream>
using namespace std;
main()
{
    int n ;
    cout<< "Enter the numbers:";
    cin >> n;
    int arr[n];
    cout <<n<<"numbers are entered.";
    for(int i = 0;i < n ;i = i+1){
        cout <<"numbers" << i + 1<<":" ;
        cin >> arr[i];
    }
        cout <<"numbers you enter:"<<endl;
        for (int i = 0;i < n; i++){
            cout << arr[i];
        }
           cout <<endl;

}