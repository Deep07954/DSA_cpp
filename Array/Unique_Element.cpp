#include<bits/stdc++.h>
using namespace std;

int findUnique(vector<int>& arr) {
    int ans = 0; // Initialize uniqueElement to 0
    for(int i = 0; i < arr.size(); i++) {
        ans ^= arr[i]; // XOR each element with uniqueElement
    }
    return ans; // Return the unique element found
}
int main() {
    int n; // Variable to store the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Input the number of elements
    vector<int> arr(n); // Declare a vector of size n
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input each element of the array
    }
    int uniqueElement=findUnique(arr);
    cout<<"Unique Element in the array is: " << uniqueElement << endl; // Print the unique element
    
    
    cout << endl; // New line after printing all unique elements
    return 0; // Return 0 
}