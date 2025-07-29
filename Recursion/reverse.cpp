#include<bits/stdc++.h>
using namespace std;
// Function to reverse a number using recursion
void reverse(int n) {
    if (n == 0) return; // Base case: if n is 0, do nothing
    cout << n % 10; // Print the last digit
    reverse(n / 10); // Recursive call with n/10
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n; // Input the number to reverse
    cout << "Reversed number of " << n << " is: ";
    reverse(n); // Call the recursive function
    cout << endl;
    return 0;
}




































