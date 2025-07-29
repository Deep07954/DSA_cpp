#include <iostream>
using namespace std;
// Function to print first n odd numbers using recursion
void printFirstNOdd(int n) {
    if (n <= 0) return; // Base case: if n is 0 or negative, do nothing
    if(n>0){
    printFirstNOdd(n - 1); // Recursive call with n-1
    cout << (n * n ) << " ";}
     // Print the nth odd numberA
    
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n; // Input the number of odd numbers to print
    cout << "First " << n << " odd numbers are: ";
    printFirstNOdd(n); // Call the recursive function
    cout << endl;
    return 0;
}