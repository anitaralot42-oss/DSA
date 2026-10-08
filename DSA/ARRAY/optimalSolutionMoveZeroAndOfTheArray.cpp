#include <iostream>              // Input aur output ke liye

using namespace std;             // std:: baar-baar likhne ki zarurat nahi


// Function jo saare zero ko array ke end me move karega
void moveZeroes(int n, int arr[])
{
    // First zero ka index store karne ke liye
    // Starting me zero ka index pata nahi hai,
    // isliye -1 rakha
    int j = -1;


    // Array me first zero find karne ke liye
    for(int i = 0; i < n; i++)
    {
        // Check kar rahe hain ki current element zero hai ya nahi
        if(arr[i] == 0)
        {
            // First zero mil gaya,
            // uska index j me store kar do
            j = i;

            // First zero mil gaya, ab aur search karne ki zarurat nahi
            break;
        }
    }


    // First zero ke baad ke elements check karenge
    for(int i = j + 1; i < n; i++)
    {
        // Agar current element zero nahi hai
        if(arr[i] != 0)
        {
            // Non-zero element ko zero wali position par le aao
            // Dono elements ki positions exchange hongi
            swap(arr[i], arr[j]);

            // Ab j ko next zero ki position par move karo
            j++;
        }
    }


    // Final array print karne ke liye
    for(int i = 0; i < n; i++)
    {
        // Array ka har element print karo
        cout << arr[i] << " ";
    }
}


int main()
{
    // n = array ke elements ki count
    // arr = original array
    int n, arr[10];


    // User se array ki size lene ke liye
    cout << "Enter number of array: ";
    cin >> n;


    // User se array elements lene ke liye
    cout << "Enter array: ";

    for(int i = 0; i < n; i++)
    {
        // Har position par element input karo
        cin >> arr[i];
    }


    // Function ko call kar rahe hain
    // n aur arr function ko pass kar rahe hain
    moveZeroes(n, arr);
}