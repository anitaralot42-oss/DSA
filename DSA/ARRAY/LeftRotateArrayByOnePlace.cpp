#include <iostream>
using namespace std;

// Ye function array ko left side me 1 place rotate karega
void LeftRotate(int n, int arr[]) {

    // First element ko temp me store kar liya
    // Kyuki ye element last me jayega
    int temp = arr[0];

    // i = 1 se start karenge
    // Har element ko ek position left shift karenge
    for (int i = 1; i < n; i++) {

        // arr[i] ki value arr[i-1] me aa jayegi
        // i = 1 -> arr[0] = arr[1]
        // i = 2 -> arr[1] = arr[2]
        // i = 3 -> arr[2] = arr[3]
        arr[i - 1] = arr[i];
    }

    // Jo first element temp me store kiya tha
    // usko array ke last index par rakh diya
    arr[n - 1] = temp;

    // Rotated array ko print karenge
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 


int main() {

    // n me array ke total elements store honge
    int n;

    // Maximum 10 elements ka array
    int arr[10];

    // User se number of elements lenge
    cout << "Enter element of array: ";
    cin >> n;

    // Array ke elements input lenge
    cout << "Enter array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Array ko left rotate by 1 karne ke liye function call
    LeftRotate(n, arr);

   
    return 0;
}