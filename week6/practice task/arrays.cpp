#include<iostream>
using namespace std;
main()
{
    int n;
    cout <<"enter the number of element of first array:";
    cin >> n;
    int array1[2];
   cout << "enter"<<n<<"element for the first array,one per line:";
    for(int i = 0;i < 2; i++){
        cin >> array1[i];
    }
    int x;
    cout <<"enter the number of elements of second array:";
    cin >> x; 
      int array2[x];
      cout << "enter"<<x<<" the number of element for second array:";
      for(int j = 0;j < x; j++){
        cin >> array2[j];
      }
      cout << array1[0] <<",";
            for(int j = 0;j < x;j++){
        cout << array2[j] <<",";
      }
      cout << array1[1];

    }
