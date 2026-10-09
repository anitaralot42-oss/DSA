#include <iostream>
using namespace std;

int main() {

    
    // Hamara array
    int n= 4;
    int arr[] = {1, 2, 3, 4};

    /*
        Array ke indexes:

        Value :  1   2   3   4
        Index :  0   1   2   3

        Subarray = array ke continuous elements ka part
    */


    // Outer loop:
    // 'start' decide karega ki subarray kaha se start hoga
    for (int start = 0; start < n; start++) {


        // Inner loop:
        // 'end' decide karega ki subarray kaha tak jayega
        //
        // end = start se start hota hai,
        // isliye har subarray minimum 1 element ka hoga
        for (int end = start; end < n; end++) {


            // Ye current subarray ki opening bracket print karega
            cout << "[";


            /*
                start se end tak ke saare elements print karenge.

                'i' start se begin hoga
                aur end tak jayega.

                Example:
                start = 0, end = 2

                i = 0 -> arr[0] = 1
                i = 1 -> arr[1] = 2
                i = 2 -> arr[2] = 3

                Output -> [1 2 3]
            */
            for (int i = start; i <= end; i++) {

                // Current element print hoga
                cout << arr[i] << " ";
            }


            // Current subarray ko close karenge
            cout << "]" << endl;
        }
    }

    return 0;
}




/*
====================================================
                SUBARRAY FORMULA
====================================================

Array ke total subarrays:

        n * (n + 1)
        -----------
             2

Yaani:

        Total Subarrays = n(n + 1) / 2


Example:

Array = [1, 2, 3, 4]

n = 4

Total Subarrays:

4 * (4 + 1) / 2
= 4 * 5 / 2
= 10

Isliye [1,2,3,4] ke total 10 subarrays hain.


----------------------------------------------------
WHY?
----------------------------------------------------

Har element se subarray start ho sakta hai:

start = 0 → 4 subarrays
start = 1 → 3 subarrays
start = 2 → 2 subarrays
start = 3 → 1 subarray

Total:

4 + 3 + 2 + 1 = 10


----------------------------------------------------
IMPORTANT
----------------------------------------------------

Subarray ke elements CONTINUOUS hone chahiye.

[1, 2]       ✅ Subarray
[2, 3, 4]    ✅ Subarray
[1, 3]       ❌ Subarray nahi

====================================================
*/