#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    if(s.length() != t.length()) return false;
    // 👉 Why two maps?
// To ensure one-to-one mapping in both directions
// Map	Purpose
// m1	maps s → t
// m2	maps t → s


    unordered_map<char, char> m1;
    unordered_map<char, char> m2;
    for(int i = 0; i < s.length(); i++) {
        // This line:
// if(m1.find(s[i]) != m1.end() && m1[s[i]] != t[i])


// 📌 Meaning:

// “If I’ve seen this character before, and it mapped to a different value, then it’s invalid.”
        if(m1.find(s[i]) != m1.end() && m1[s[i]] != t[i]) return false;
        if(m2.find(t[i]) != m2.end() && m2[t[i]] != s[i]) return false;
        m1[s[i]] = t[i];
        m2[t[i]] = s[i];
    }
    return true;
}
int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    if(isIsomorphic(s1, s2)) {
        cout << "The strings are isomorphic." << endl;
    } else {
        cout << "The strings are not isomorphic." << endl;
    }
    return 0;
}