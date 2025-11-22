#include<bits/stdc++.h>
#include<vector>
using namespace std;
int BinarySearch(vector<int>arr,int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target)
        return mid;
        if(mid-1>=0 && arr[mid-1]==target)
        return mid-1;
        if(mid+1<n && arr[mid+1]==target)
        return mid+1;

        if(target>arr[mid])
        s=mid+2;
        else
        e=mid-2;


    }
    return -1;

}
int main(){
    int target;
  
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    vector<int>arr(n);
    
   
  
    for(int i=0;i<n;i++)
    {cout<<"enter the elements:"<<" ";
    cin>>arr[i];
    }
      cout<<"Enter the target:";
    cin>>target;
    int result=BinarySearch(arr,n,target);
    if(result!= -1) 
    {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}






// int binarySearch(int arr[], int n, int target) {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target) {
//             return mid;
//         }
//         if (mid > low && arr[mid - 1] == target) {
//             return mid - 1;
//         }
//         if (mid < high && arr[mid + 1] == target) {
//             return mid + 1;
//         }
//         if (arr[mid] < target) {
//             low = mid + 2;
//         } else {
//             high = mid - 2;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {10, 3, 40, 20, 50, 80, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 20;
//     int result = binarySearch(arr, n, target);
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }
//     return 0;
// }