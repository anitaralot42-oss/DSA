#include <iostream>
using namespace std;

// Function array sorted hai ya nahi check karega
void isSorted(int n, int arr[]) {

    // i = 1 se start kiya kyunki
    // har element ko uske previous element se compare karna hai
    for(int i = 1; i < n; i++) {

        // Agar current element previous se chhota hai
        // iska matlab array sorted nahi hai
        if(arr[i] < arr[i-1]) {

            // Array unsorted hai
            cout << "Unsorted array";

            // Function ko yahin stop kar do
            return;
        }
    }

    // Agar loop complete ho gaya aur kahin bhi
    // current element previous se chhota nahi mila
    // to array sorted hai
    cout << "Array sorted!!";
}

int main() {

    int n, arr[50];

    // Array ka size input lena
    cout << "Enter number of array : ";
    cin >> n;

    // Array ke elements input lena
    cout << "Enter array element : ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Function ko call karna
    isSorted(n, arr);

    return 0;
}