
#include <iostream>
using namespace std;

int main() {

    // Ye hamara array hai
    int arr[] = {1, 2, 3, 4};

    /*
        Array ke indexes:
        
        Value :  1   2   3   4
        Index :  0   1   2   3

        Hum index 1 se index 2 tak ke elements print karenge.

        Index 1 -> 2
        Index 2 -> 3

        Isliye [2, 3] ek subarray hai.
        Kyuki 2 aur 3 continuous (lagataar) hain.
    */

    // i = 1 se start kar rahe hain
    for (int i = 1; i <= 2; i++) {

        // Current index ki value print hogi
        cout << arr[i] << " ";
    }

    return 0;
}