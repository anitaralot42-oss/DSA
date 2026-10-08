#include <iostream>
using namespace std;


// Function banaya hai missing number find karne ke liye
// n = 1 se N tak ka range
// arr[] = array jisme numbers diye hain
void missing(int n, int arr[])
{
    
    // 1 se n tak har number ko ek-ek karke check karenge
    // i = wo number jise hum array ke andar search kar rahe hain
    for(int i = 1; i <= n; i++)
    {
        
        // Initially maan rahe hain ki i array mein nahi mila
        // 0 = number nahi mila
        // 1 = number mil gaya
        int flag = 0;


        // Ab i ko array ke har element ke saath compare karenge
        // j = array ka index
        // j = 0 → first element
        // j = 1 → second element
        // ...
        for(int j = 0; j < n - 1; j++)
        {
            
            // Check kar rahe hain:
            // Kya array ke current element ki value i ke equal hai?
            if(arr[j] == i)
            {
                
                // Agar equal hai, iska matlab i array mein mil gaya
                // Isliye flag ko 1 kar diya
                flag = 1;

                // Number mil gaya hai,
                // ab array mein aur search karne ki zarurat nahi
                break;
            }
        }


        // Agar poora array check karne ke baad
        // flag abhi bhi 0 hai,
        // iska matlab i array mein nahi mila
        if(flag == 0)
        {
            
            // Jo number nahi mila wahi missing number hai
            cout << "Missing number is : " << i;

            // Missing number mil gaya,
            // ab function ko yahin stop kar do
            return;
        }
    }
}


int main()
{
    // n mein 1 se N tak ka range store hoga
    // arr[10] mein array ke elements store honge
    int n, arr[10];


    // User se N input le rahe hain
    cout << "Enter number of array: ";
    cin >> n;


    // User se array ke elements input lenge
    cout << "Enter array: ";


    // Array mein n-1 elements input honge
    // Kyunki 1 number missing hai
    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }


    // Missing number find karne ke liye
    // missing function ko call kar rahe hain
    missing(n, arr);

    
    return 0;
}