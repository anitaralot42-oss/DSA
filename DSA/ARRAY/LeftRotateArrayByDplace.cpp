#include <iostream>
using namespace std;


// Array ko left side me d positions se rotate karne ka function
void LeftRotate(int n, int arr[], int d)
{
    // -----------------------------------------
    // STEP 1: d ko n ke according reduce karna
    // -----------------------------------------

    // Agar d < n hai:
    // Example: 3 % 7 = 3
    // d same rahega
    //
    // Agar d > n hai:
    // Example: 10 % 7 = 3
    // 10 rotations ki jagah sirf 3 rotations karni hain
    //
    // Agar d = n hai:
    // Example: 7 % 7 = 0
    // Array same rahega
    d = d % n;


    // -----------------------------------------
    // STEP 2: First d elements ko save karna
    // -----------------------------------------

    // First d elements ko temporarily store karne ke liye
    // temp array banaya hai
    //
    // Example:
    // arr = 1 2 3 4 5 6 7
    // d = 3
    //
    // temp = 1 2 3
    int temp[d];


    // Ye loop first d elements ko temp me store
    // karne ke liye hai
    for (int i = 0; i < d; i++)
    {
        // arr ke first elements ko temp me copy kar rahe hain
        temp[i] = arr[i];
    }


    // -----------------------------------------
    // STEP 3: Array ko left shift karna
    // -----------------------------------------

    // Ye loop array ke remaining elements ko
    // d positions LEFT SHIFT karne ke liye hai
    //
    // Example:
    // arr = 1 2 3 4 5 6 7
    // d = 3
    //
    // 4 -> first position
    // 5 -> second position
    // 6 -> third position
    // 7 -> fourth position
    //
    // Result temporarily:
    // 4 5 6 7 5 6 7
    for (int i = d; i < n; i++)
    {
        // Current element ko d positions peeche
        // yani LEFT side me shift kar rahe hain
        arr[i - d] = arr[i];
    }


    // -----------------------------------------
    // STEP 4: Saved elements ko last me rakhna
    // -----------------------------------------

    // First d elements jo temp me save kiye the
    // unko array ke LAST d positions par rakhne ke liye
    // ye loop hai
    //
    // Example:
    // temp = 1 2 3
    //
    // Array ke last 3 positions:
    // index 4, 5, 6
    //
    // 1 -> index 4
    // 2 -> index 5
    // 3 -> index 6
    for (int i = n - d; i < n; i++)
    {
        // temp ke saved elements ko
        // array ke last positions me put kar rahe hain
        arr[i] = temp[i - (n - d)];
    }
}


int main()
{
    // n = array me kitne elements hain
    // arr[50] = maximum 50 elements
    // d = kitni positions rotate karni hain
    int n, arr[50], d;


    // Array ka size input lene ke liye
    cout << "Enter element of array :";
    cin >> n;


    // Array ke elements input lene ke liye
    cout << "enter array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    // Kitni positions rotate karni hain
    // wo input lene ke liye
    cout << "how much rotation? :";
    cin >> d;


    // LeftRotate function call
    // Ye function array ko rotate karega
    LeftRotate(n, arr, d);


    // Rotation ka result print karne ke liye
    cout << "Rotation by " << d << " place : ";


    // Ye loop sirf updated array ko PRINT
    // karne ke liye hai
    //
    // Rotation is loop me nahi ho rahi
    // Rotation already LeftRotate() function me ho chuki hai
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}