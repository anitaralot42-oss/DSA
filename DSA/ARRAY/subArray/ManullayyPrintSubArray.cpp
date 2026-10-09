#include <iostream>
// iostream = input/output ke liye library
// Iski wajah se hum cout aur endl use kar paate hain

using namespace std;
// std:: baar-baar likhne ki zarurat nahi
// Isse hum directly cout, endl etc. likh sakte hain


int main() {
    // main() = program ka execution yahin se start hota hai


    int arr[] = {1, 2, 3, 4};
    // Ek integer array banaya
    // Index:       0  1  2  3
    // Values:      1  2  3  4


    // ---------------- SUBARRAY 1: [1, 2] ----------------

    cout << "[";
    // Output me "[" print kar rahe hain
    // Taaki subarray ka format [1 2] jaisa dikhe


    for (int i = 0; i <= 1; i++) {
        // i = 0 se start hoga
        // i <= 1 means index 0 aur 1 tak chalega
        // i++ har iteration ke baad i ko 1 se badhayega

        cout << arr[i] << " ";
        // arr[i] = current index ki value
        // i = 0 → arr[0] = 1
        // i = 1 → arr[1] = 2
        // Isliye output: 1 2
    }


    cout << "]" << endl;
    // "]" print karke subarray close kar diya
    // endl = next line par le jaata hai


    // ---------------- SUBARRAY 2: [2, 3] ----------------

    cout << "[";
    // Subarray start karne ke liye "[" print


    for (int i = 1; i <= 2; i++) {
        // Is baar i = 1 se start hoga
        // i <= 2 means index 1 aur 2 tak chalega
        // i = 1 → arr[1] = 2
        // i = 2 → arr[2] = 3

        cout << arr[i] << " ";
        // Current index ki value print karega
    }


    cout << "]" << endl;
    // Subarray close karo aur next line par jao


    // ---------------- SUBARRAY 3: [3, 4] ----------------

    cout << "[";
    // Subarray start karne ke liye "[" print


    for (int i = 2; i <= 3; i++) {
        // i = 2 se start hoga
        // i <= 3 means index 2 aur 3 tak chalega
        // i = 2 → arr[2] = 3
        // i = 3 → arr[3] = 4

        cout << arr[i] << " ";
        // Current index ki value print karega
    }


    cout << "]" << endl;
    // Subarray close karo aur next line par jao


    return 0;
    // Program successfully end ho gaya
}