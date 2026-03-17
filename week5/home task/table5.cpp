#include<iostream>
using namespace std;
main()
{
    int num,table ,result;
    cout <<"enter the value of table:";
    cin >>table;
    for (num = 1;num <= 10;num++){
      result = table * num;  
        cout <<table<<"*"<<num<<"="<<result<<endl;
    }
}