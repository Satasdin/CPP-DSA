// Question 3
// Compute the area and perimeter of a square using functions.

#include <iostream>
using namespace std;

// function that returns the area of a square
float getArea(float s) {
    float area = s * s;
    return area;
}

// function that returns the perimeter of a square
float getPerimeter(float s) {
    float perimeter = 4 * s;
    return perimeter;
}

int main() {
    float side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Area of the square = " << getArea(side) << endl;
    cout << "Perimeter of the square = " << getPerimeter(side) << endl;

    return 0;
}
