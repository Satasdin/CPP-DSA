// Question 6
// Program that reads 5 values into an array and shows their average.

#include <iostream>
using namespace std;

int main() {
    float numbers[5];
    float sum = 0;
    float average;

    // loop to populate the array with 5 values from the user
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> numbers[i];
        sum = sum + numbers[i];
    }

    average = sum / 5;

    cout << "The average of the 5 values is: " << average << endl;

    return 0;
}
