#include <iostream>

using namespace std;

int power(int base, int exponent);

int main() {
    int base, exponent;
    cout << "Enter the number to be raised: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << base << " raised to " << exponent << " is equal to " << power(base, exponent) << "\n";
    cout << "\t" << base << "^" << exponent << " = " << power(base, exponent);
    return 0;
}
int power(int base, int exponent) {
    if (exponent == 0) return 1;
    else return base * power(base, exponent-1);
}