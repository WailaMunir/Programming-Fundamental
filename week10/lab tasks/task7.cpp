#include<iostream>
#include<conio.h>
using namespace std;
int insymmetric(int num){
    int number = num ;
    int reverse = 0;
    while(num > 0){

    int digit = num % 10;
    reverse = reverse * 10 + digit;
     num = num / 10;
}
if(number == reverse){
 return true;
}
else{
    return false;
}
}

main()
{
    int num;
    cout<<"Enter the three digit number :";
    cin>>num;
    if(insymmetric(num)){

    cout<<"The number is symmetric";
    }
    else{
        cout<<"the number is not symmetric";
    }
    


}