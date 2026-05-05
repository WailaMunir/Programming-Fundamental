#include <iostream>
#include <conio.h>
using namespace std;

// ---------------- GLOBAL VARIABLES ----------------
int TOTAL_CUSTOMER = 1000;
int index = 2;

string namesArray[1000] = {"Ali", "Umer"};
string adressArray[1000] = {"street1", "street2"};
string cityArray[1000] = {"lahore", "multan"};
int IdArray[1000] = {1234, 5678};
float weightArray[1000] = {7.5, 9};
float chargesArray[1000] = {1100, 1500};
int daysArray[1000] = {4, 8};
string statusArray[1000] = {"pending", "pending"};

// ---------------- BASIC FUNCTIONS ----------------

// This function clears screen and prints main heading
void header()
{
    system("cls");
    cout << "/-----------------------------------------------------------/" << endl;
    cout << "/-------------COURIER/DELIVERY MANAGMENT SYSTEM-------------/" << endl;
    cout << "/-----------------------------------------------------------/" << endl;
}

// This function pauses screen
void pauseScreen()
{
    cout << "Press Any Key To Continue ..";
    getch();
}

// ---------------- ADMIN FUNCTIONS ----------------

// Function for adding parcel
void addParcel()
{
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

    // calculate charges
    if (cityArray[index] == "local")
    {
        chargesArray[index] = weightArray[index] * 100;
        daysArray[index] = 2;
    }
    else if (cityArray[index] == "City")
    {
        chargesArray[index] = weightArray[index] * 150;
        daysArray[index] = 4;
    }
    else
    {
        chargesArray[index] = weightArray[index] * 200;
        daysArray[index] = 8;
    }

    statusArray[index] = "pending";

    cout << "CHARGES : " << chargesArray[index] << endl;
    cout << "DELIVERY IN " << daysArray[index] << " Days" << endl;

    index++;
}

// Function to show all records
void showAll()
{
    cout << "NAME\tADRESS\tID\tCITY\tWEIGHT\tCHARGES\tDAYS\tSTATUS" << endl;
    for (int i = 0; i < index; i++)
    {
        cout << namesArray[i] << "\t" << adressArray[i] << "\t"
             << IdArray[i] << "\t" << cityArray[i] << "\t"
             << weightArray[i] << "\t" << chargesArray[i] << "\t"
             << daysArray[i] << "\t" << statusArray[i] << endl;
    }
}

// Function to search parcel
int searchParcel(int searchID)
{
    for (int i = 0; i < index; i++)
    {
        if (IdArray[i] == searchID)
        {
            return i; // return index if found
        }
    }
    return -1; // not found
}

// Function to update parcel
void updateParcel()
{
    int id;
    cout << "Enter ID to update: ";
    cin >> id;

    int i = searchParcel(id);

    if (i != -1)
    {
        cout << "Enter new name: ";
        cin >> namesArray[i];

        cout << "Enter new address: ";
        cin >> adressArray[i];

        cout << "Enter new city: ";
        cin >> cityArray[i];

        cout << "Enter new weight: ";
        cin >> weightArray[i];

        cout << "Enter new charges: ";
        cin >> chargesArray[i];

        cout << "Enter new days: ";
        cin >> daysArray[i];

        cout << "Enter new status: ";
        cin >> statusArray[i];

        cout << "Record Updated Successfully!" << endl;
    }
    else
    {
        cout << "Record not found!" << endl;
    }
}

// Function to delete parcel
void deleteParcel()
{
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    int i = searchParcel(id);

    if (i != -1)
    {
        namesArray[i] = "";
        adressArray[i] = "";
        cityArray[i] = "";
        IdArray[i] = 0;
        weightArray[i] = 0;
        chargesArray[i] = 0;
        daysArray[i] = 0;
        statusArray[i] = " ";

        cout << "Record Deleted!" << endl;
    }
    else
    {
        cout << "Record not found!" << endl;
    }
}

// Function to show delivered parcels
void showDelivered()
{
    for (int i = 0; i < index; i++)
    {
        if (statusArray[i] == "delivered")
        {
            cout << namesArray[i] << "/" << IdArray[i] << endl;
        }
    }
}

// Function to calculate total revenue
void totalRevenue()
{
    float total = 0;
    for (int i = 0; i < index; i++)
    {
        total += chargesArray[i];
    }
    cout << "Total Revenue: " << total << endl;
}

// ---------------- MAIN FUNCTION ----------------

int main()
{

    while (true)
    {
        header();

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
        int option;
        cout << "Enter the option:" << endl;
        cin >> option;

        if (option == 1)
        {

            string u, p;
            cout << "Enter username: ";
            cin >> u;
            cout << "Enter password: ";
            cin >> p;

            if (u == "admin" && p == "123")
            {

                while (true)
                {
                    header();
                    cout << "1.Add" << endl;
                    cout << "2.Show" << endl;
                    cout << "3.Update" << endl;
                    cout << "4.Delete" << endl;
                    cout << "5.Revenue" << endl;
                    cout << "6.Exit" << endl;
                    ;
                    int ch;
                    cin >> ch;

                    if (ch == 1)
                        addParcel();
                    else if (ch == 2)
                        showAll();
                    else if (ch == 3)
                        updateParcel();
                    else if (ch == 4)
                        deleteParcel();
                    else if (ch == 5)
                        totalRevenue();
                    else
                        break;

                    pauseScreen();
                }
            }
        }
        else if (option == 2)
        {
            showAll();
            pauseScreen();
        }
        else
        {
            break;
        }
    }

    cout << "Thanks for using system";
}