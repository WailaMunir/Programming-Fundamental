#include <iostream>
#include <conio.h>

using namespace std;

main()
{

    int TOTAL_CUSTOER = 1000; // total size
    int index = 0;

    // data structures
    string namesArray[TOTAL_CUSTOER];
    string adressArray[TOTAL_CUSTOER];
    string cityArray[TOTAL_CUSTOER];
    int IdArray[TOTAL_CUSTOER];
    float weightArray[TOTAL_CUSTOER];
    float chargesArray[TOTAL_CUSTOER];
    int daysArray[TOTAL_CUSTOER];
    string statusArray[TOTAL_CUSTOER];

    while (true)
    {
        // main header of CDMS
        system("cls");
        cout << "/-----------------------------------------------------------/" << endl;
        cout << "/-------------COURIER/DELIVERY MANAGMENT SYSTEM-------------/" << endl;
        cout << "/-----------------------------------------------------------/" << endl;

        cout << "User Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Customer" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose option :";
        int userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == 1)
        {
            // write here the admin code
            int countAttempt = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "ADMIN MENU : LOGIN ATTEMPT " << i + 1 << endl;
                cout << "Enter username :";
                string username;
                cin >> username;
                cout << "Enter password :";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "LOGIN SUCCESS" << endl;

                    while (true)
                    {
                        system("cls");
                        cout << "1. ADD PARCEL " << endl;
                        cout << "2. SHOW ALL " << endl;
                        cout << "3. SEARCH PARCEL" << endl;
                        cout << "4. UPDATE STATUS" << endl;
                        cout << "5. DELETE PARCEL" << endl;
                        cout << "6. EXIT" << endl;
                        cout << "CHOOSE THE ADMIN OPTION " << endl;
                        int adminOption;
                        cin >> adminOption;
                        if (adminOption == 1)
                        {
                            // add parcel record
                            cout << "Enter The Customer Name :";
                            cin >> namesArray[index];
                            cout << "Enter The Adress :";
                            cin >> adressArray[index];
                            cout << "Enter The Tracking ID :";
                            cin >> IdArray[index];
                            cout << "Enter The City :";
                            cin >> cityArray[index];
                            cout << "Enter the weight :";
                            cin >> weightArray[index];
                            // charges calculation
                            if (cityArray[index] == "local")
                            {
                                chargesArray[index] = weightArray[index] * 100;
                            }
                            else if (cityArray[index] == "City")
                            {
                                chargesArray[index] = weightArray[index] * 150;
                            }
                            else
                            {
                                chargesArray[index] = weightArray[index] * 200;
                            }
                            // delivery days
                            if (cityArray[index] == "local")
                            {
                                daysArray[index] = 2;
                            }
                            else if (cityArray[index] == "City")
                            {
                                daysArray[index] = 4;
                            }
                            else
                            {
                                daysArray[index] = 8;
                            }
                            statusArray[index] = "pending";
                            cout << "CHARGES : " << chargesArray[index] << endl;
                            cout << "DELIVERY IN " << daysArray[index] << " Days" << endl;
                            index = index + 1;
                            cout << "Press Any Key To Continue ..";
                            getch();
                        }
                        else if (adminOption == 2)
                        {
                            // show all record
                            cout << "NAME\tADRESS\tTreakingID\tCITY\tWEIGHT\tCHARGES\tDAYS\tSTATUS" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                cout << namesArray[i] << "\t" << adressArray[i] << "\t" << IdArray[i] << "\t" << cityArray[i] << "\t"
                                     << weightArray[i] << "\t" << chargesArray[i] << "\t" << daysArray[i] << "\t" << statusArray[i] << endl;
                            }
                        }
                        else if (adminOption == 3)
                        {
                            // search parcel
                            cout << "Enter The ID You Want To Search " << endl;
                            int searchID;
                            cin >> searchID;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (IdArray[i] == searchID)
                                {
                                    cout << "NAME\tADRESS\tTreakingID\tCITY\tWEIGHT\tCHARGES\tDAYS\tSTATUS" << endl;
                                    cout << namesArray[i] << "\t" << adressArray[i] << "\t" << IdArray[i] << "\t" << cityArray[i] << "\t"
                                         << weightArray[i] << "\t" << chargesArray[i] << "\t" << daysArray[i] << "\t" << statusArray[i] << endl;
                                         found = true;
                                
                            
                                }
                            }
                             if(found == true){

                             }
                        }
                        else if (adminOption == 4)
                        {
                            // update status
                        }
                        else if (adminOption == 5)
                        {
                            // delete parcel
                        }
                        else if (adminOption == 6)
                        {
                            // exit
                            break;
                        }
                        else
                        {
                            cout << "Wronge Option Is Selected" << endl;
                        }

                        cout << "Press Any Key To Continue ..";
                        getch();
                    }

                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid" << endl;
                }
                cout << "Press Any Key To Continue ..";

                getch();
            }
        }
        else if (userOption == 2)
        {
            // write here the customer code
            system("cls");
            cout << "Welcome to C\\DMS Customer Menu " << endl;
            cout << "Enter customer name :";
            string name;
            cin >> name;
            cout << "Enter customer adress :";
            string adress;
            cin >> adress;
            cout << "Enter customer ID :";
            int id;
            cin >> id;
            cout << "Enter city name :";
            string city;
            cin >> city;
            cout << "Enter the weight :";
            float weight;
            cin >> weight;
            cout << "Enter the charges:";
            float charges;
            cin >> charges;
            cout << "Enter the number of days :";
            int days;
            cin >> days;
            cout << "Enter the status :";
            string status;
            cin >> status;
            namesArray[index] = name;
            adressArray[index] = adress;
            cityArray[index] = city;
            IdArray[index] = id;
            weightArray[index] = weight;
            chargesArray[index] = charges;
            daysArray[index] = days;
            statusArray[index] = status;
            index = index + 1;
            cout << "Your data has been saved" << endl;

            cout << "Press Any Key To Continue ..";
            getch();
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << "You enter wrong option" << endl;
        }
    } // end of main while loop
    cout << endl
         << "Thanks for using this software" << endl;
}