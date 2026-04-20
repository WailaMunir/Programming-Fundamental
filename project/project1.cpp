#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int total_students = 1000; // total siza
    int index = 7;

    // data structure
    string nameArray[total_students] = {"ali", "ammar", "fatima", "ahmad", "zain", "nida", "tariq"};
    int ageArray[total_students]{19, 20, 22, 22, 20, 23, 19};
    float matricArray[total_students] = {1050, 890, 960, 960, 880, 910, 995};
    float interArray[total_students] = {980, 850, 900, 900, 820, 840, 950};
    float ecatArray[total_students] = {350, 280, 300, 300, 270, 310, 360};
    float aggregateArray[total_students];
    string pref1Array[total_students] = {"CE", "CS", "EE", "EE", "CS", "CE", "CS"};
    string pref2Array[total_students] = {"CS", "CE", "CS", "CS", "CE", "EE", "CE"};
    string pref3Array[total_students] = {"EE", "CS", "CE", "CE", "CS", "EE", "CS"};

    // CRUD Create, Read, Update, Delete
    while (true)
    {
        // main header of university management system (ums)
        system("cls");
        cout << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "------University Admission Management System------" << endl;
        cout << "--------------------------------------------------" << endl;

        cout << "User Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. To Exit" << endl;
        cout << "Choose Option : ";
        string user_option;
        cin >> user_option;

        cout << "You choose " << user_option << endl;
        if (user_option == "1")
        {
            // write here the admin code

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu : Login attempt " << i + 1 << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Login Success" << endl;

                    while (true)
                    {

                        system("cls");
                        cout << "1. Show all students " << endl;
                        cout << "2. Search Student " << endl;
                        cout << "3. Update student record " << endl;
                        cout << "4. Generate Merit List " << endl;
                        cout << "5. Delete Record by Name" << endl;
                        cout << "6. Log Out" << endl;
                        cout << "Choose the option : ";
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // find student by name
                            cout << "Enter the name you want to search ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundIndex = i;

                                    found = true;
                                }
                            }

                            if (found == false)
                            {

                                cout << "Record not found against name" << name << endl;
                            }
                            else
                            {

                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundIndex] << "\t" << ageArray[foundIndex] << "\t" << matricArray[foundIndex] << "\t" << interArray[foundIndex] << "\t"
                                     << ecatArray[foundIndex] << "\t" << pref1Array[foundIndex] << "\t" << pref2Array[foundIndex] << "\t" << pref3Array[foundIndex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // update student record

                            cout << "Enter the name you want to update record of ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundIndex = i;

                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "--------Old Record--------" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundIndex] << "\t" << ageArray[foundIndex] << "\t" << matricArray[foundIndex] << "\t" << interArray[foundIndex] << "\t"
                                     << ecatArray[foundIndex] << "\t" << pref1Array[foundIndex] << "\t" << pref2Array[foundIndex] << "\t" << pref3Array[foundIndex] << endl;

                                cout << "Enter new record for update" << endl;
                                cout << "Welcome to UMS Student Menu " << endl;
                                cout << "Enter your name : ";
                                string name;
                                cin >> name;
                                cout << "Enter Age : ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks : ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC Marks : ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAT Marks : ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS , CE, EE as your preferences" << endl;
                                cout << "Enter your 1st Preference : ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd Preference : ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd Preference : ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundIndex] = name;
                                ageArray[foundIndex] = age;
                                matricArray[foundIndex] = matric;
                                interArray[foundIndex] = fsc;
                                ecatArray[foundIndex] = ecat;
                                pref1Array[foundIndex] = pref1;
                                pref2Array[foundIndex] = pref2;
                                pref3Array[foundIndex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggregate = matricArray[i] / 1050.0 * 100 * 0.30 + interArray[i] / 1100.0 * 100 * 0.4 + ecatArray[i] / 400 * 100 * 0.3;
                                aggregateArray[i] = aggregate;
                            }

                            // sorting the data on the basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggregateArray[i] < aggregateArray[j])
                                    {

                                        // swappinf of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swapping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // swapping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // swapping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // swapping pf p1
                                        string temppref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = temppref1;

                                        // swapping of p2
                                        string temppref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = temppref2;

                                        // swapping of p3
                                        string temppref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = temppref3;

                                        // swapping of aggregate
                                        float tempAggregate = aggregateArray[i];
                                        aggregateArray[i] = aggregateArray[j];
                                        aggregateArray[j] = tempAggregate;
                                    }
                                }
                            }

                            // code to display all data with aggregate
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggregateArray[i] << endl;
                                }
                            }
                            // admit student into disciplines
                        }
                        else if (adminOption == "5")
                        {
                            // delete student record
                            cout << "Enter the name you want to Delete record of ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundIndex = i;

                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundIndex] = "";
                                ageArray[foundIndex] = 0;
                                matricArray[foundIndex] = 0;
                                interArray[foundIndex] = 0;
                                ecatArray[foundIndex] = 0;
                                pref1Array[foundIndex] = "";
                                pref2Array[foundIndex] = "";
                                pref3Array[foundIndex] = "";
                                cout << "Record of " << name << " Deleted " << endl;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }

                        cout << "Press any key to continue...";
                        getch();
                    }

                    cout << "Press any key to continue...";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid" << endl;
                }
                cout << "Press any key to continue... ";
                getch();
            }
        }
        else if (user_option == "2")
        {
            // write here the student code
            system("cls");
            cout << "Welcome to UMS Student Menu " << endl;
            cout << "Enter your name : ";
            string name;
            cin >> name;
            cout << "Enter Age : ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks : ";
            float matric;
            cin >> matric;
            cout << "Enter FSC Marks : ";
            float fsc;
            cin >> fsc;
            cout << "Enter ECAT Marks : ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS , CE, EE as your preferences" << endl;
            cout << "Enter your 1st Preference : ";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd Preference : ";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd Preference : ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            cout << "Your data has been saved" << endl;
            cout << "Press any key to continue... ";
            getch();
        }
        else if (user_option == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }
    } // end of our main while loop

    cout << endl
         << "Thanks for using this software";
}