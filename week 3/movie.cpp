#include<iostream>
using namespace std;
main()
{
string moviename;
int adultprice;
int childprice;
int adultticket;
int childticket;
int percentage;
int totalmoney;
int charitymoney;
int earnedmoney;

cout <<" Enter the movie name:";
cin >> moviename;

cout << "Enter the adult ticket price :";
cin >> adultprice;

cout << "Enter the child ticket price :";
cin >> childprice;

cout << "Enter the number of adult ticket sold :";
cin >> adultticket;

cout << "Enter the number of child ticket sold :";
cin >> childticket;

cout << "Enter the percentage amount :";
cin >> percentage;

totalmoney = (adultprice * adultticket) + (childprice * childticket);
cout << "total money generated from ticket sale:"<<totalmoney << endl;

charitymoney = (totalmoney * percentage) / 100;
cout << " donated to charity :$"<<charitymoney << endl;

earnedmoney = totalmoney - charitymoney;
cout << "remaining earned money:$"<<earnedmoney;
}






