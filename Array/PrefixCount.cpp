#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 0, 0, 0, 0};
    int n = 5;

    int sum = arr[0];
    int count = 0;

    for(int i = 1; i < n; i++) {

        if(sum == 0) {
            count++;
        }
        else if(arr[i] == 0) {
            arr[i] = -sum; }  // force prefix sum to zero
            sum+=arr[i];
        }
if(sum == 0) {
        count++;
       
    }
     cout <<count<<endl;
}


    // check last prefix
    

