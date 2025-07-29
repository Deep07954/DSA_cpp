#include<bits/stdc++.h>
using namespace std;
// Function to find the maximum element in an array using recursion
int maxArray(int arr[], int n) {
    // Base case: if the array has only one element, return that element
    if (n == 1) {
        return arr[0];
    }
    // Recursive case: find the maximum in the rest of the array
    int maxInRest = maxArray(arr + 1, n - 1);
    // Return the maximum between the first element and the maximum of the rest
    return max(arr[0], maxInRest);
}
// Main function to test the maxArray function
int main() {
   
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Input the number of elements in the array
    int arr[n]; // Declare an array of size n
    // Initialize the array with some elements
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maxElement = maxArray(arr, n); // Call the recursive function to find the maximum element
    cout << "The maximum element in the array is: " << maxElement << endl;
    return 0; // Return 0 to indicate successful execution
}