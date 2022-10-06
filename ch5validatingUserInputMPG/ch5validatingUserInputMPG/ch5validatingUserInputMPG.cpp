// ch5validatingUserInputMPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    auto miles=0.0, gallons=0.0, MPG=0.0;
    string response = "y";
    cout << "Ch 5 Miles Per Gallon by Kevin Bell\n\n";
    while (response == "y" || response == "Y" || response == "Yes" || response == "YES" || response == "yes") {
        cout << "Enter miles traveled (100.0 to 500.0): ";
        cin >> miles;
        while (miles < 100.0 || miles > 500.0) {
            cout << "Enter miles traveled (100.0 to 500.0): ";
            cin >> miles;
        }
        cout << "Enter gallons used (1.0 to 50.0): ";
        cin >> gallons;
        while (gallons < 1.0 || gallons > 50.0) {
            cout << "Enter gallons used (1.0 to 50.0): ";
            cin >> gallons;
        }
        MPG = miles / gallons;
        cout << "MPG for that trip is: " << MPG << endl;
        cout << "Do you want to calculate another trip? (y/n) ";
        cin >> response;
    }
    system("pause");
    return 0;
}