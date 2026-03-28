#include<iostream>
using namespace std;
main()
{
    string input;
    cout <<"enter your string:";
    getline (cin , input);
    string result;
    char ch;
    for (int i = 0;i < input .length() ;i ++){
        ch = input[i];
    
if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
     || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
     continue;
}
else{
    result = result + ch;
}
    }
cout << result << endl;
}