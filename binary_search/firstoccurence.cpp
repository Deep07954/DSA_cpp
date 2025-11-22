#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> arr = {1, 2, 3,4,4,4, 4, 5,6};
int target = 4;

    // Finding first occurrence
    // int firstOccurrence = -1;
    // int low = 0;
    // int high = arr.size() - 1;
 
    // while(low <= high) {
    //     int mid = low + (high - low) / 2;
    //     if(arr[mid] == target) {
    //         firstOccurrence = mid;
    //         high = mid - 1;  // Continue searching in the left half
    //     } else if(arr[mid] < target) {
    //         low = mid + 1;
    //     } else {
    //         high = mid - 1;
    //     }
        
    // }

    // Finding last occurrence
    
    int lastOccurrence = -1;
    int low = 0;
    int high = arr.size() - 1;
    int mid = low + (high - low) / 2;
    while (low <= high) {

        if (arr[mid] == target) {
            lastOccurrence = mid;
            low = mid + 1;  // Continue searching in the right half
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
          mid = low + (high - low) / 2;
    }

    // cout << "First occurrence of " << target << ": " << firstOccurrence << endl;
    cout << "Last occurrence of " << target << ": " << lastOccurrence << endl;

    return 0;
}
// int n;
// cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter the element to search for: ";
//     cin >> key;


    // int firstOccurrence = -1, lastOccurrence = -1;

    // // Finding first occurrence
    // for(int i = 0; i < n; i++) {
    //     if(arr[i] == key) {
    //         firstOccurrence = i;
    //         break;
    //     }
    // }

    // // Finding last occurrence
    // for(int i = n - 1; i >= 0; i--) {
    //     if(arr[i] == key) {
    //         lastOccurrence = i;
    //         break;
    //     }
    // }

    // cout << "First occurrence of " << key << ": " << firstOccurrence << endl;
    // cout << "Last occurrence of " << key << ": " << lastOccurrence << endl;

    // return 0;
