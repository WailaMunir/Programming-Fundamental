#include<iostream>
using namespace std;
main()
{
    int n;
    int count = 0;
    cout <<"Enter the number of elements:"<<endl;
    cin >> n;
    int arr[n];
         cout <<"Enter"<< n <<"numbers, one per line:"<<endl;
           for(int i = 0;i < n; i++){
            int enter;
            cin>>enter;
            bool alreadyexists = false;
           for(int j =0;j < i; j++){
           if(arr[j] == enter){
            alreadyexists = true;
            break;
           }
           }
           if(alreadyexists){
        cout<<"Already entered"<< enter<<endl;
           }
       else{
        arr[count] = enter;
        count++;
     }
        
    }
        cout<<"unique number entered:"<<n <<endl;
}
    
    
   

    