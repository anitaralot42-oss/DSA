#include <iostream>
using namespace std;

// Ye function largest aur second largest find karega
void Largest(int n, int arr[]) {

    // Pehle element ko largest maan liya
    int largest = arr[0];

    // -------- FIRST PASS --------
    // Is loop se sirf largest find karenge
    for (int i = 0; i < n; i++) {

        // Agar current element largest se bada hai
        if (arr[i] > largest) {

            // Current element ko largest bana do
            largest = arr[i];
        }
    }

    // Ab largest mil gaya
    // largest = 7


    // Second largest ke liye initially -1
    int secondLargest = -1;

    // -------- SECOND PASS --------
    // Ab second largest find karenge
    for (int i = 0; i < n; i++) {

        // Current element:
        // 1. secondLargest se bada hona chahiye
        // 2. largest ke equal nahi hona chahiye
        if (arr[i] > secondLargest && arr[i] != largest) {

            // Current element ko second largest bana do
            secondLargest = arr[i];
        }
    }

    // Final answer print
    cout << "Largest element : " << largest << endl;
    cout << "Second Largest Element : " << secondLargest;
}


int main() {

    int n, arr[10];

    // Number of elements input
    cout << "Enter number of array : ";
    cin >> n;

    // Array elements input
    cout << "Enter array elements : ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Function call
    Largest(n, arr);

    return 0;
}