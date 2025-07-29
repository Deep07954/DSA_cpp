#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; // Variable to store the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Input the number of elements
    int arr[n]; // Declare an array of size n
    cout << "Enter the elements of the array (0s and 1s only): ";
    for(int i=0; i<n; i++){
        cin >> arr[i]; // Input each element of the array
    }
    
    int count0 = 0, count1 = 0; // Initialize counters for 0s and 1s
    for(int i=0; i<n; i++){
        if(arr[i] == 0) count0++; // Increment count0 if the element is 0
        else if(arr[i] == 1) count1++; // Increment count1 if the element is 1
    }
    
    cout << "Number of 0s: " << count0 << endl; // Output the count of 0s
    cout << "Number of 1s: " << count1 << endl; // Output the count of 1s
    
    return 0; // Return 0 to indicate successful execution
}