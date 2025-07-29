#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int maxi=INT_MIN; // Initialize maxi to the smallest possible integer
    int n; // Variable to store the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Input the number of elements
    int arr[n]; // Declare an array of size n
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i]; // Input each element of the array
        // maxi = max(maxi, arr[i]);// Alternative way to update maxi using the max function
        if(arr[i] > maxi) // Check if the current element is greater than the current maximum
            maxi = arr[i]; // If it is, update maxi to this element
    //  Update maxi to the maximum of current maxi and the current element
    }
    cout << "The maximum element in the array is: " << maxi << endl; // Output the maximum element
    return 0; // Return 0 to indicate successful execution

}