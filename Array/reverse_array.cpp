#include<bits/stdc++.h>
using namespace std;
int main() {  
    int n; // Variable to store the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Input the number of elements
    int arr[n]; // Declare an array of size n bad practice of initializing array
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input each element of the array
    }
    int start = 0, end = n - 1; // Initialize start and end indices for the array
    while(start<=end) {
        if(start==end)
        {cout<<arr[start]<<" "; // If start equals end, print the single element
        }
        else {
            swap(arr[start], arr[end]); // Swap the elements at start and end indices
        }
        start++; // Move the start index forward
        end--; // Move the end index backward
    
    }
    cout<<endl;
    cout << "After swapping extreme elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the elements of the array after swapping
    }
    
    cout << endl; // New line after printing all extreme elements
    return 0; // Return 0 to indicate successful execution
}