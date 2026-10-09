
#include <iostream>
#include <algorithm> // swap() function ke liye
using namespace std;

// Bubble Sort function
void sort(int arr[], int n)
{

    // Outer loop: kitne passes chalane hain
    for (int i = 0; i < n - 1; i++)
    {

        // Inner loop: adjacent elements ko compare karna
        // Har pass ke baad largest element end mein pahunch jata hai
        for (int j = 0; j < n - i - 1; j++)
        {

            // Agar current element next element se bada hai
            if (arr[j] > arr[j + 1])
            {

                // Dono elements ki positions swap kar do
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{

    int arr[100], n;

    // User se array ka size input lena
    cout << "Enter number of array elements: ";
    cin >> n;

    // Array ke elements input lena
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort function call karna
    sort(arr, n);

    // Sorted array print karna
    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

// ### Time Complexity

// * **Best Case:** \(O(n^2)\) — is code mein, kyunki array pehle se sorted hone par bhi saare loops chalte hain.
// * **Average Case:** \(O(n^2)\)
// * **Worst Case:** \(O(n^2)\)

// ### Space Complexity

// * **\(O(1)\)** auxiliary space — sorting ke liye extra array use nahi kiya.

// ### Bubble Sort ka basic logic

// Har pass mein adjacent elements compare hote hain. Agar left wala element bada hai, toh dono swap hote hain. Is tarah largest unsorted element har pass ke end mein pahunch jata hai.
