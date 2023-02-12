#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    while (choice != 5) {
        cout << "Select a Planet:" << endl;
        cout << "  1. Mercury" << endl;
        cout << "  2. Venus" << endl;
        cout << "  3. Earth" << endl;
        cout << "  4. Mars" << endl;
        cout << "  5. Exit the program" << endl;
        cout << endl;
        cout << "Enter the number of your selected Planet: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << endl;
                cout << "\tMERCURY:" << endl;
                cout << "\t  Average distance from the sun: 57.9 million kilometers" << endl;
                cout << "\t  Mass: 3.31 x 10^23kg" << endl;
                cout << "\t  Surface temperature: -173 to 430 degrees Celsius" << endl;
                cout << endl;
                break;
            case 2:
                cout << endl;
                cout << "\tVENUS:" << endl;
                cout << "\t  Average distance from the sun: 108.2 million kilometers" << endl;
                cout << "\t  Mass: 4.87 x 10^24kg" << endl;
                cout << "\t  Surface temperature: 472 degrees Celsius" << endl;
                cout << endl;
                break;
            case 3:
                cout << endl;
                cout << "\tEARTH:" << endl;
                cout << "\t  Average distance from the sun: 149.6 million kilometers" << endl;
                cout << "\t  Mass: 5.967 x 10^24kg" << endl;
                cout << "\t  Surface temperature: -50 to 50 degrees Celsius" << endl;
                cout << endl;
                break;
            case 4:
                cout << endl;
                cout << "\tMARS:" << endl;
                cout << "\t  Average distance from the sun: 227.9 million kilometers" << endl;
                cout << "\t  Mass: 0.6424 x 10^24kg" << endl;
                cout << "\t  Surface temperature: -140 to 20 degrees Celsius" << endl;
                cout << endl;
                break;
            case 5:
                cout << endl;
                cout << "\tExiting the program..." << endl;
                cout << endl;
                break;
            default:
                cout << endl;
                cout << "\tInvalid choice, please try again." << endl;
                cout << endl;
        }
    }
    return 0;
}