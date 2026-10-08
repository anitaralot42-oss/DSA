#include <iostream>              // Input-output ke liye library

using namespace std;             // std:: baar-baar likhne ki zarurat nahi


// Linear Search function
// n = array ka size
// arr[] = array
// num = jis number ko search karna hai
void linearSearch(int n, int arr[], int num)
{
    // Array ke har element ko one by one check karenge
    for(int i = 0; i < n; i++)
    {
        // Check kar rahe hain ki current element
        // search kiye ja rahe number ke equal hai ya nahi
        if(arr[i] == num)
        {
            // Agar number mil gaya, toh uska index print karo
            cout << "It's true : " << i;

            // Number mil gaya, isliye function ko yahin stop kar do
            // Iske baad neeche wala "not in array" print nahi hoga
            return;
        }
    }

    // Agar poora loop chal gaya aur number nahi mila
    // toh ye message print hoga
    cout << "this number is not in array";
}


int main()
{
    // n = array ka size
    // arr[50] = maximum 50 elements store kar sakta hai
    // num = search karne wala number
    int n, arr[50], num;

    // User se array ka size input lena
    cout << "Enter number of array : ";
    cin >> n;

    // User se array ke elements input lena
    cout << "Enter array : ";

    // Array ke har index par element input karna
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // User se wo number lena jise search karna hai
    cout << "enter your search number is : ";
    cin >> num;

    // Linear Search function ko call karna
    // n, arr aur num function ko pass kar rahe hain
    linearSearch(n, arr, num);
}