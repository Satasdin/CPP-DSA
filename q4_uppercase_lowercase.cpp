// Question 4
// Program that uses a function to check if a character is uppercase or lowercase.

#include <iostream>
using namespace std;

// function to check the case of a character
// Uppercase letters A-Z: ASCII 65 - 90
// Lowercase letters a-z: ASCII 97 - 122
void checkCase(char ch) {
    if (ch >= 65 && ch <= 90) {
        cout << "'" << ch << "' is an UPPERCASE letter." << endl;
    }
    else if (ch >= 97 && ch <= 122) {
        cout << "'" << ch << "' is a LOWERCASE letter." << endl;
    }
    else {
        cout << "'" << ch << "' is not a letter." << endl;
    }
}

int main() {
    char userChar;

    cout << "Enter a character: ";
    cin >> userChar;

    checkCase(userChar);

    return 0;
}
