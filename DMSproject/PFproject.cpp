#include <iostream>
#include <conio.h>

using namespace std;

main()
{

    int TOTAL_CUSTOMER = 1000; // total size
    int index = 2;

    // data structures
    string namesArray[TOTAL_CUSTOMER] = {"Ali", "Umer"};
    string adressArray[TOTAL_CUSTOMER] = {"street1", "street2"};
    string cityArray[TOTAL_CUSTOMER] = {"lahore", "multan"};
    int IdArray[TOTAL_CUSTOMER] = {1234, 5678};
    float weightArray[TOTAL_CUSTOMER] = {7.5, 9};
    float chargesArray[TOTAL_CUSTOMER] = {1100, 1500};
    int daysArray[TOTAL_CUSTOMER] = {4, 8};
    string statusArray[TOTAL_CUSTOMER] = {"pending", "pending"};

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
                        cout<<"==========ADMIN MENU============"<<endl;
                        cout << "1. ADD PARCEL " << endl;
                        cout << "2. SHOW ALL " << endl;
                        cout << "3. SEARCH PARCEL" << endl;
                        cout << "4. UPDATE STATUS" << endl;
                        cout << "5. DELETE PARCEL" << endl;
                        cout << "6. Show Delivery" << endl;
                        cout << "7. Show Pending " << endl;
                        cout << "8. Total Revenue " << endl;
                        cout << "9. Highest Charges" << endl;
                        cout << "10. EXIT" << endl;
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
                            cout << "Enter City Type (local/city/other): ";
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
                            // search parcel by id
                            cout << "Enter The ID You Want To Search " << endl;
                            int searchID;
                            cin >> searchID;

                            bool found = false;
                            int foundindex = -1;

                            // search record
                            for (int i = 0; i < index; i++)
                            {
                                if (IdArray[i] == searchID)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }

                            if (found == true)
                            {
                                cout << "Record Found Successfully" << endl;
                                cout << "NAME\tADRESS\tTreakingID\tCITY\tWEIGHT\tCHARGES\tDAYS\tSTATUS" << endl;

                                cout << namesArray[foundindex] << "\t"
                                     << adressArray[foundindex] << "\t"
                                     << IdArray[foundindex] << "\t"
                                     << cityArray[foundindex] << "\t"
                                     << weightArray[foundindex] << "\t"
                                     << chargesArray[foundindex] << "\t"
                                     << daysArray[foundindex] << "\t"
                                     << statusArray[foundindex] << endl;
                            }
                            else
                            {
                                cout << "Record not found against tracking ID " << searchID << endl;
                            }
                        }
                        else if (adminOption == 4)
                        {
                            // update status
                            cout << "Enter The ID You Want To update " << endl;
                            int searchID;
                            cin >> searchID;

                            bool found = false;
                            int foundindex = -1;

                            // search record
                            for (int i = 0; i < index; i++)
                            {
                                if (IdArray[i] == searchID)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }

                            if (found == true)
                            {
                                cout << "----------Old Record---------" << endl;
                                cout << "NAME\tADRESS\tTreakingID\tCITY\tWEIGHT\tCHARGES\tDAYS\tSTATUS" << endl;

                                cout << namesArray[foundindex] << "\t"
                                     << adressArray[foundindex] << "\t"
                                     << IdArray[foundindex] << "\t"
                                     << cityArray[foundindex] << "\t"
                                     << weightArray[foundindex] << "\t"
                                     << chargesArray[foundindex] << "\t"
                                     << daysArray[foundindex] << "\t"
                                     << statusArray[foundindex] << endl;
                                found = true;
                                cout << "Enter new record for update " << endl;

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
                                namesArray[foundindex] = name;
                                adressArray[foundindex] = adress;
                                cityArray[foundindex] = city;
                                IdArray[foundindex] = id;
                                weightArray[foundindex] = weight;
                                chargesArray[foundindex] = charges;
                                daysArray[foundindex] = days;
                                statusArray[foundindex] = status;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminOption == 5)
                        {
                            // delete parcel
                            cout << "Enter The ID You Want To delete the record " << endl;
                            int searchID;
                            cin >> searchID;

                            bool found = false;
                            int foundindex = -1;

                            // search record
                            for (int i = 0; i < index; i++)
                            {
                                if (IdArray[i] == searchID)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }

                            if (found == true)
                            {
                                // shift all elements to left (proper delete)
                                namesArray[foundindex] = "";
                                adressArray[foundindex] = "";
                                cityArray[foundindex] = "";
                                IdArray[foundindex] = 0;
                                weightArray[foundindex] = 0;
                                chargesArray[foundindex] = 0;
                                daysArray[foundindex] = 0;
                                statusArray[foundindex] = " ";
                                cout << "Record of " << searchID << "Deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminOption == 6)
                        {
                            // show delivery
                            for (int i = 0; i < index; i++)
                            {
                                if (statusArray[i] == "delivered")
                                {
                                    cout << namesArray[i] << "/" << IdArray[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == 7)
                        {
                            // show pending
                            for (int i = 0; i < index; i++)
                            {
                                if (statusArray[i] == "pending")
                                {
                                    cout << namesArray[i] << "/" << IdArray[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == 8)
                        {
                            // total revenue
                            float total = 0;
                            for (int i = 0; i < index; i++)
                            {
                                total = total + chargesArray[i];
                            }
                            cout << "Total revenue :" << total << endl;
                        }
                        else if (adminOption == 9)
                        {
                            // highest charges
                            float max = chargesArray[0];
                            int count = 0;
                            for (int i = 0; i < index; i++)
                            {
                                if (chargesArray[i] > max)
                                {
                                    max = chargesArray[i];
                                    count = i;
                                }
                            }
                            cout << "Highest Charge Parcel :";
                            cout << namesArray[count] << "/" << chargesArray[count] << endl;
                        }
                        else if (adminOption == 10)
                        {
                            // exit
                            cout << "Exit From Admin Menu" << endl;
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
            while(true){
            // write here the customer code
            int choice;
            cout << "=============== USER MENU ==================" << endl;

            cout << "1. Search Parcel " << endl;
            cout << "2. Show ALL " << endl;
            cout << "3. Show delivery " << endl;
            cout << "4. Show Pending " << endl;
            cout << "5. Check Charges " << endl;
            cout << "6. Check delivery " << endl;
            cout << "7. Count Total Parcel " << endl;
            cout << "8. Count Delivery " << endl;
            cout << "9. Count panding " << endl;
            cout << "10. Exit " << endl;
            cout << "Enter the choice " << endl;
            cin >> choice;

            if (choice == 1)
            {
                int searchID;
                cout << "Enter the ID " << endl;
                cin >> searchID;
                for (int i = 0; i < index; i++)
                {
                    if (IdArray[i] == searchID)
                    {
                        cout << "Successfully found the ID " << IdArray[i] << endl;
                    }
                }
            }
            else if (choice == 2)
            {
                for (int i = 0; i < index; i++)
                {
                    cout << namesArray[i] << "/" << IdArray[i] << endl;
                }
            }
            else if (choice == 3)
            {
                for (int i = 0; i < index; i++)
                {
                    if (statusArray[i] == "delivered")
                    {
                        cout << namesArray[i] << endl;
                    }
                }
            }
            else if (choice == 4)
            {
                for (int i = 0; i < index; i++)
                {
                    if (statusArray[i] == "pending")
                    {
                        cout << namesArray[i] << endl;
                    }
                }
            }
            else if (choice == 5)
            {
                int searchID;
                cout << "Enter ID " << endl;
                cin >> searchID;
                for (int i = 0; i < index; i++)
                {
                    if (IdArray[i] == searchID)
                    {
                        cout << "Charges :" << chargesArray[i] << endl;
                    }
                }
            }
            else if (choice == 6)
            {
                int searchID;
                cout << "Enter ID " << endl;
                cin >> searchID;
                for (int i = 0; i < index; i++)
                {
                    if (IdArray[i] == searchID)
                    {
                        cout << "Days :" << daysArray[i] << endl;
                    }
                }
            }
            else if (choice == 7)
            {
                cout << "Total Parcels :" << index << endl;
            }
            else if (choice == 8)
            {
                int c = 0;
                for (int i = 0; i < index; i++)
                {
                    if (statusArray[i] == "delivered")
                    {
                        c++;
                    }
                }
                cout << "Total Delivered: " << c << endl;
            }
            else if (choice == 9)
            {
                int c = 0;
                for (int i = 0; i < index; i++)
                {
                    if (statusArray[i] == "pending")
                    {
                        c++;
                    }
                }

                cout << "Total Pending: " << c << endl;
            }
            else
            {
                cout << "Exit From User Menu" << endl;
            }

            cout << "Press Any Key To Continue ..";
            getch();
        }
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