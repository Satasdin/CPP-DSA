// Question 2
// Calculate the volume of a sphere using V = (4/3) * pi * r^3
// Using pow() from <cmath> to compute r cubed.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radius;
    float pi = 3.14159;

    cout << "Please enter the radius of the sphere: ";
    cin >> radius;

    // compute r cubed using the inbuilt exponential function
    float rCubed = pow(radius, 3);
    float volume = (4.0 / 3.0) * pi * rCubed;

    cout << "The volume of the sphere is " << volume << endl;

    return 0;
}
