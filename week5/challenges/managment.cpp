#include<iostream>
using namespace std;
main()
{
  string username,password;
  string studentname = "";
  int studentage = 0;
  string coursename = "";
  int choice;
  for (int i = 1;i <= 3; i++){
    cout <<"enter the user name:";
    cin >> username;
    cout << "enter the password:";
    cin >> password;
    if(username == "admin" && password == "1234"){
        cout <<"login successful"<<endl;
        break;
    }
    else{
        cout << "wrong login"<<endl;
    } 
    if(i == 3 && !(username == "admin" && password == "1234")){
        cout << "too many attempts . program ends."<<endl;
    }
 }
 for (int i = 1; i <= 5; i++){
    cout <<endl<<"-----university managment system ------"<<endl;
    cout <<"1.add student"<<endl;
    cout <<"2.view student"<<endl;
    cout <<"3.add course"<<endl;
    cout <<"4.exit"<<endl;
    cout << "enter choice:";
    cin >> choice;
    if (choice == 1){
        cout <<"enter the studend name:";
        cin >>studentname;
        cout <<"enter the student age:";
        cin >>studentage;
        cout <<"student enter successfully"<<endl;
    }
    else if (choice == 2){
        if (studentname != ""){
            cout <<"student name:"<<studentname<<endl;
            cout <<"student age:"<<studentage <<endl;
        }
        else{
            cout <<"no student record found"<<endl;
        }
    }
    else if (choice ==3){
        cout <<"enter course name:";
        cin >> coursename;
        cout <<"course added: "<<coursename<<endl;
    }
    else if (choice == 4){
        cout <<"program exit"<<endl;
        break;
    }
    else{
        cout << "invalid choice"<<endl;
    }
 }

}