
#include <bits/stdc++.h>
// This code converts a decimal number to binary using recursion
using namespace std;
// Function to print binary of a given decimal number  using recursion
void DtoB(int n) {
    if (n <= 0) return; // Base case: if n is 0 or negative, do nothing
    if(n>0){
    // Recursive call with n/2
    cout << (n %2 ) << " ";
    DtoB(n/2);
    }
     
    
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n; // Input the decimal number to convert
    cout << "deciaml of " << n << " to binary of " << n << " is: ";
    DtoB(n); // Call the recursive function
    cout << endl;
    return 0;
}