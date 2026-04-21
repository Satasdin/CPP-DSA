// Question 5
// Translate the REPEAT...UNTIL pseudocode into C++.
// REPEAT...UNTIL runs the body first then checks the condition,
// so we use a do-while loop.
// "UNTIL y < 6" means stop when y becomes less than 6,
// which is the same as "while y >= 6".

#include <iostream>
using namespace std;

int main() {
    float x = 0;
    int y = 20;

    do {
        y = y - 4;
        x = x + (2.0 / y);   // using 2.0 to avoid integer division
    } while (y >= 6);

    cout << "The value of x is: " << x << endl;

    return 0;
}
