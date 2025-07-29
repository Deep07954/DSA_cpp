#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 4, 6, 8, 10};
    vector<int> b = {3, 4, 5, 6};
    vector<int> ans;

    // Step 1: Mark duplicates between a and b with INT_MIN in b
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                b[j] = INT_MIN; // Mark duplicate
                break;
            }
        }
    }

    // Step 2: Add all elements from a (they are unique already)
    for (int i = 0; i < a.size(); i++) {
       
            ans.push_back(a[i]);
        
    }

    // Step 3: Add only non-duplicate (non-INT_MIN) elements from b
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != INT_MIN) {
            ans.push_back(b[i]);
        }
    }

    // Optional: Sort the union result
    // sort(ans.begin(), ans.end());

    // Print result
    cout << "Union of arrays (without duplicates): ";
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
//🧠 Key Points:

// INT_MIN is used to mark and skip duplicates.

// break ensures each duplicate is only marked once.

// You get the union without using set or map, purely using array logic.