#include<bits/stdc++.h>
using namespace std;
  bool compare(int a, int b, int x) {
    return abs(a - x) < abs(b - x) || (abs(a - x) == abs(b - x) && a < b);
}
vector<int> kClosestElements(vector<int>& arr, int k, int x) {
  
   sort(arr.begin(), arr.end(), [&](int a, int b) { return compare(a, b, x); });
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

    // while (left < right) {
    //     int mid = left + (right - left) / 2;
    //     if (x - arr[mid] > arr[mid + k] - x) {
    //         left = mid + 1;
    //     } else {
    //         right = mid;
    //     }
    // }

    // return vector<int>(arr.begin() + left, arr.begin() + left + k);


int main() {
    int n, k, x;

    vector<int> arr = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    n = arr.size();
    // cout << "Enter the elements of the array: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the value of x: ";
    cin >> x;



    vector<int> result = kClosestElements(arr, k, x);
    // sort(result.begin(), result.end());
    cout << "The " << k << " closest elements to " << x << " are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

