#include <iostream>
using namespace std;

int main() {

    int n, ld, rev = 0;

    // User se number lena
    cout << "Enter digit number: ";
    cin >> n;

    // Original number ko temp mein save kar rahe hain
    // Kyunki loop ke andar n change hone wala hai
    int temp = n;

    while (n > 0) {

        // Number ki last digit nikal rahe hain
        ld = n % 10;

        // Last digit ko reverse number mein add kar rahe hain
        rev = (rev * 10) + ld;

        // Last digit remove kar rahe hain
        n = n / 10;
    }

    // Reverse number print
    cout << "Reverse number is : " << rev << endl;

    // Reverse ko original number se compare kar rahe hain
    if (rev == temp) {
        cout << "It's palindrome";
    }
    else {
        cout << "Not palindrome";
    }

    return 0;
}
