#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4};

    // Subarray 1: [1, 2]
    cout << "[";
    for (int i = 0; i <= 1; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;


    // Subarray 2: [2, 3]
    cout << "[";
    for (int i = 1; i <= 2; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;


    // Subarray 3: [3, 4]
    cout << "[";
    for (int i = 2; i <= 3; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;


    return 0;
}