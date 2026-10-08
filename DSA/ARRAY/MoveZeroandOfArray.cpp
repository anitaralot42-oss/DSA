#include <iostream>              // Input-output ke liye library

using namespace std;             // std baar-baar likhne ki zarurat nahi


// Function: array ke saare 0 ko end me move karega
void moveZeroes(int n, int arr[])
{
    int temp[10], j = 0;         // temp = non-zero elements store karega
                                  // j = temp me next empty position


    // Original array ko traverse karenge
    for(int i = 0; i < n; i++)
    {
        // Check: current e lement 0 nahi hai?
        if(arr[i] != 0)
        {
            temp[j] = arr[i];    // Non-zero element ko temp me store karo
            j++;                 // Next empty position par jao
        }
    }


    // temp ke elements ko wapas arr me copy karenge
    for(int i = 0; i < j; i++)
    {
        arr[i] = temp[i];        // Non-zero value arr me copy karo
    }


    // Bachi hui positions me 0 fill karenge
    for(int i = j; i < n; i++)
    {
        arr[i] = 0;              // Remaining positions ko 0 bana do
    }


    // Final array print karenge
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";   // Har element print karo
    }
}


int main()
{
    int n, arr[10];              // n = array size
                                  // arr = array


    cout << "Enter number of array: ";  // User se size maango
    cin >> n;                            // Size input lo


    cout << "Enter array: ";             // Array elements maango

    // Array ke elements input lene ke liye loop
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];                   // Har element input lo
    }


    moveZeroes(n, arr);                  // Function ko call karo
}