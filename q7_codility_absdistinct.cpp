// Question 7
// Codility challenge: AbsDistinct (Lesson 15: Caterpillar Method)
// Given a sorted non-decreasing array A, return the number of distinct absolute values.
// Example: A = [-5, -3, -1, 0, 3, 6] has distinct absolute values {0, 1, 3, 5, 6} = 5.
//
// Approach: since the array is sorted, use two pointers from both ends.
// The largest absolute value is always at one end. Take it, then move that
// pointer inward, skipping duplicates via a "last taken" value.

#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    int n = A.size();
    if (n == 0) {
        return 0;
    }

    int left = 0;
    int right = n - 1;
    int distinctCount = 0;
    long long lastValue = -1;   // sentinel, since absolute values are always >= 0

    while (left <= right) {
        // get absolute values at each end (long long to handle INT_MIN safely)
        long long leftAbs = A[left];
        if (leftAbs < 0) {
            leftAbs = -leftAbs;
        }

        long long rightAbs = A[right];
        if (rightAbs < 0) {
            rightAbs = -rightAbs;
        }

        // take the larger absolute value and move that pointer inward
        if (leftAbs >= rightAbs) {
            if (leftAbs != lastValue) {
                distinctCount = distinctCount + 1;
                lastValue = leftAbs;
            }
            left = left + 1;
        }
        else {
            if (rightAbs != lastValue) {
                distinctCount = distinctCount + 1;
                lastValue = rightAbs;
            }
            right = right - 1;
        }
    }

    return distinctCount;
}

int main() {
    int n;
    cout << "How many elements are in the sorted array? ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter " << n << " values (sorted in non-decreasing order):\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int result = solution(A);
    cout << "Number of distinct absolute values: " << result << endl;

    return 0;
}
