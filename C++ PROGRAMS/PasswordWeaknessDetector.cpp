#include <iostream>

using namespace std;

int main() {
    string password;
    bool hasLowerCase = false;
    bool hasUpperCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;
    bool isConsecutiveLowercase = false;
    bool isConsecutiveUppercase = false;
    bool isConsecutiveDigit = false;
    bool isRepeating = false;

    cout << "Enter your password: ";
    getline(cin, password);

    for (int i = 0; i < password.length(); i++) {
        char character = password[i];
        if (islower(character)) {
            hasLowerCase = true;
            if (i < password.length() - 1 && islower(password[i + 1]) 
                    && character == password[i + 1]) {
                isConsecutiveLowercase = true;
            }
        } else if (isupper(character)) {
            hasUpperCase = true;
            if (i < password.length() - 1 && isupper(password[i + 1]) 
                    && character == password[i + 1]) {
                isConsecutiveUppercase = true;
            }
        } else if (isdigit(character)) {
            hasDigit = true;
            if (i < password.length() - 1 && isdigit(password[i + 1]) 
                    && character == password[i + 1]) {
                isConsecutiveDigit = true;
            }
        } else if (!isalnum(character)) {
            hasSpecialChar = true;
        }
        if (i < password.length() - 2 && password[i] == password[i + 1] 
                    && password[i + 1] == password[i + 2]) {
            isRepeating = true;
        }
    }
    if (password.length() < 8) {
        cout << "\tPassword is too short" << "\n";
    }
    if (!hasLowerCase || !hasUpperCase) {
        cout << "\tPassword must contain at least one uppercase letter and one lowercase letter" << "\n";
    }
    if (!hasDigit) {
        cout << "\tPassword must contain at least one numeric digit" << "\n";
    }
    if (!hasSpecialChar) {
        cout << "\tPassword must contain at least one special character" << "\n";
    }
    if (isConsecutiveLowercase) {
        cout << "\tPassword cannot contain a sequence of consecutive lowercase letters" << "\n";
    }
    if (isConsecutiveUppercase) {
        cout << "\tPassword cannot contain a sequence of consecutive uppercase letters" << "\n";
    }
    if (isConsecutiveDigit) {
        cout << "\tPassword cannot contain a sequence of consecutive digits" << "\n";
    }
    if (isRepeating) {
        cout << "\tPassword cannot contain a repeating sequence of characters" << "\n";
    }
    if (password.length() >= 8 && hasLowerCase && hasUpperCase && hasDigit && hasSpecialChar 
        && !isConsecutiveLowercase && !isConsecutiveUppercase && !isConsecutiveDigit && !isRepeating) {
        cout << "\tPassword is strong" << "\n";
    }
    return 0;
}
