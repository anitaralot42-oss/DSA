
#include <iostream>  // cout aur endl ke liye
#include <climits>   // INT_MIN aur INT_MAX ke liye

using namespace std;

int main() {

    // INT_MAX = int data type ki maximum possible value
    cout << INT_MAX << endl;

    // INT_MIN = int data type ki minimum possible value
    cout << INT_MIN << endl;

    return 0;  // Program successfully end hua
}


// **Output:**

// ```text
// 2147483647
// -2147483648
// ```

// **Notes:**

// * `INT_MAX` → int ki sabse badi value.
// * `INT_MIN` → int ki sabse chhoti value.
// * `<climits>` → in constants ko use karne ke liye header file.
// * Bina `<climits>` ke bhi kuch compilers mein code chal sakta hai, lekin correct practice hai ki ise include karein.
// * Ye values common 32-bit `int` ke liye hain.
