#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; // Variable to store the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Input the number of elements
    int arr[n]; // Declare an array of size n
    cout << "Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i]; // Input each element of the array
    }
    int start=0, end=n-1; // Initialize start and end indices for the array
    while(true){
    if(start>end)
        { break;}
        
        // If start index exceeds end index, exit the loop
    if(start==end)
        {cout<<arr[start]<<" ";
        }// If start equals end, print the single element
     else
        {cout<< arr[start] << " "; // Print the element at the start index
        cout<<arr[end]<<" ";} // Print the element at the end index
        start++;
        end--; // Move the start index forward and the end index backward
    
}
    
    
   
    return 0; // Return 0 to indicate successful execution
}