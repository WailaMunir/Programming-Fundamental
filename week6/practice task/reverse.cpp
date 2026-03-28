#include<iostream>
using namespace std;
main()
{
    char word[5] = {'H','e','l','l','o'};
    int num[5] = {1,2,3,4,5};
    for(int i = 0 ;i < 5 ;i++){
         cout <<"enter a string:" <<word[i]<< endl;   
    }
    for(int i = 4;i >= 0;i--){
        cout <<"reverse string:" <<word[i]<<endl;
    }
}
