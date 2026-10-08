#include <iostream>
using namespace std;

// Function array mein se largest element find karega
void largest(int n, int arr[]) {

    // Starting mein array ka first element largest maan rahe hain
    int largest = arr[0];

    // Array ke har element ko check karenge
    for (int i = 0; i < n; i++) {

        // Agar current element largest se bada hai
        if (arr[i] > largest) {

            // Toh largest ki value update kar denge
            largest = arr[i];
        }
    }

    // Final largest element print
    cout << "Largest element : " << largest;
}

int main() {

    // Maximum 50 elements ka array
    int n, arr[50];

    // User se array ka size lena
    cout << "Enter number of array : ";
    cin >> n;

    // Array ke elements input lena
    cout << "Enter array element : ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // largest function ko n aur array bhejna
    largest(n, arr);

    return 0;
}