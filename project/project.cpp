#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int total_students = 1000; // total size
    int index = 2;

    // data structure
    string namearr[total_students] = {"ali", "ammar", "fatima", "ahmad", "zain", "nida", "tariq"};
    int agearr[total_students] = {9, 20, 22, 22, 20, 23, 19};
    float matricarr[total_students] = {1050, 890, 960, 960, 880, 910, 995};
    float interarr[total_students] = {980, 850, 900, 900, 820, 840, 950};
    float ecatarr[total_students] = {350, 280, 300, 300, 270, 310, 360};
    string pref1arr[total_students] = {"CE", "CS", "EE", "EE", "CS", "CE", "CS"};
    string pref2arr[total_students] = {"CS", "CE", "CS", "CS", "CE", "EE", "CE"};
    string pref3arr[total_students] = {"EE", "CS", "CE", "CE", "CS", "EE", "CS"};
    float aggriarr[total_students];

    // CRUD Create, Read, Update, Delete
    while (true)
    {
        // main header of UMS
        system("cls");
        cout << "|---------------------------------------------------|" << endl;
        cout << "|-------University Admission Managment System-------|" << endl;
        cout << "|---------------------------------------------------|" << endl;

        cout << "User menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Eixt" << endl;
        cout << "Choose option :";
        int userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == 1)
        {
            // write here the admin code
            int countattempt = 0;

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu  :  Login attempt" << i + 1 << endl;
                cout << "Enter username:";
                string username;
                cin >> username;
                cout << "Enter password:";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Login succes";

                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students " << endl;
                        cout << "2. Search student " << endl;
                        cout << "3. Update student record " << endl;
                        cout << "4. Generate merit list " << endl;
                        cout << "5. Delete record by name "<<endl;
                        cout << "6. Exit" << endl;
                        cout << "Choose the option : ";
                        int adminoption;
                        cin >> adminoption;
                        if (adminoption == 1)
                        {
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tp1\tp2\tp3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if(namearr[i] != ""){

                                cout << namearr[i] << "\t" << agearr[i] << "\t" << matricarr[i] << "\t" << interarr[i] << "\t"
                                     << ecatarr[i] << "\t" << pref1arr[i] << "\t" << pref2arr[i] << "\t" << pref3arr[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == 2)
                        {
                            // find student by name
                            cout << "Enter the name of user yo want to search:";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (namearr[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name  " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tp1\tp2\tp3" << endl;
                                cout << namearr[foundindex] << "\t" << agearr[foundindex] << "\t" << matricarr[foundindex] << "\t" << interarr[foundindex] << "\t"
                                     << ecatarr[foundindex] << "\t" << pref1arr[foundindex] << "\t" << pref2arr[foundindex] << "\t" << pref3arr[foundindex] << endl;
                            }
                        }
                        else if (adminoption == 3)
                        {
                            // update student record
                            cout << "Enter the name of user you want to update record of :";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (namearr[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "-----Old Record -----"<<endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tp1\tp2\tp3" << endl;
                                cout << namearr[foundindex] << "\t" << agearr[foundindex] << "\t" << matricarr[foundindex] << "\t" << interarr[foundindex] << "\t"
                                     << ecatarr[foundindex] << "\t" << pref1arr[foundindex] << "\t" << pref2arr[foundindex] << "\t" << pref3arr[foundindex] << endl;

                            

                            cout << "enter new record for update " << endl;
                            cout << "Enter the user name:";
                            string name;
                            cin >> name;
                            cout << "Enter age :";
                            int age;
                            cin >> age;
                            cout << "Enter matric marks:";
                            float matric;
                            cin >> matric;
                            cout << "Enter FSC marks:";
                            float fsc;
                            cin >> fsc;
                            cout << "enter ECAT marks:";
                            float ecat;
                            cin >> ecat;
                            cout << "Enter CS, CE, EE as your preferance" << endl;
                            cout << "Enter your 1st pref:";
                            string pref1;
                            cin >> pref1;
                            cout << "Enter your 2nd pref:";
                            string pref2;
                            cin >> pref2;
                            cout << "Enter your 3rd pref:";
                            string pref3;
                            cin >> pref3;

                            namearr[foundindex] = name;
                            agearr[foundindex] = age;
                            matricarr[foundindex] = matric;
                            interarr[foundindex] = fsc;
                            ecatarr[foundindex] = ecat;
                            pref1arr[foundindex] = pref1;
                            pref2arr[foundindex] = pref2;
                            pref3arr[foundindex] = pref3;
                        }
                        else
                        {
                            cout << "Record not found " << endl;
                        }
                    }
                    else if (adminoption == 4)
                    {
                        // generate merit list
                        for(int i = 0;i < index; i++){
                            float aggri = matricarr[i] / 1050.0 * 100.0 *0.30 + interarr[i] / 100.0 * 100.0 * 0.40 + ecatarr[i] / 400.0 * 100.0 * 0.30;
                            aggriarr[i] = aggri;
                        }
                        // code to disply all data with aggrigate
                        cout << "Name\tAge\tAggrigate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if(namearr[i] != ""){
                                    
                                cout << namearr[i] << "\t" << agearr[i] << "\t" << aggriarr[i] <<endl;
                                }
                            }

                        //code to disply sorted data
                    }
                    else if (adminoption == 5)
                    {
                        // delete student record
                        cout << "Enter the name of user you want to delete record of :";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (namearr[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                }
                            }
                            if(found == true){
                                namearr[foundindex] = "";
                            agearr[foundindex] = 0;
                            matricarr[foundindex] =0;
                            interarr[foundindex] = 0;
                            ecatarr[foundindex] = 0;
                            pref1arr[foundindex] = "";
                            pref2arr[foundindex] = "";
                            pref3arr[foundindex] = "";
                            cout<<"Record of "<<name<<"Deleted"<<endl;
                            }
                            else{
                                cout<<"Record not found "<<endl;
                            }
                    }
                    
                    else if (adminoption == 6)
                    {
                        // back
                        break;
                    }
                    else
                    {
                        cout << "wrong option selected " << endl;
                    }
                    cout << "Press any key to continue";
                    getch();
                }
                cout << "Press any key to continue";
                getch();
                break;
            }
            else
            {
                cout << "Username or password is invalid" << endl;
            }
            cout << "Press any key to continue ..";
            getch();
        }
    }
    else if (userOption == 2)
    {
        // write here the student code
        system("cls");
        cout << "Welcome to UMS Student menu " << endl;
        cout << "Enter the user name:";
        string name;
        cin >> name;
        cout << "Enter age :";
        int age;
        cin >> age;
        cout << "Enter matric marks:";
        float matric;
        cin >> matric;
        cout << "Enter FSC marks:";
        float fsc;
        cin >> fsc;
        cout << "enter ECAT marks:";
        float ecat;
        cin >> ecat;
        cout << "Enter CS, CE, EE as your preferance" << endl;
        cout << "Enter your 1st pref:";
        string pref1;
        cin >> pref1;
        cout << "Enter your 2nd pref:";
        string pref2;
        cin >> pref2;
        cout << "Enter your 3rd pref:";
        string pref3;
        cin >> pref3;

        namearr[index] = name;
        agearr[index] = age;
        matricarr[index] = matric;
        interarr[index] = fsc;
        ecatarr[index] = ecat;
        pref1arr[index] = pref1;
        pref2arr[index] = pref2;
        pref3arr[index] = pref3;
        index = index + 1;
        cout << "Your data has been saved" << endl;

        cout << "Press any key to continue .." << endl;
        getch();
    }
    else if (userOption == 3)
    {
        break;
    }
    else
    {
        cout << "You enter the wrong option " << endl;
    }
} // End of our main while loop
cout << "Thanks for using this software";
}