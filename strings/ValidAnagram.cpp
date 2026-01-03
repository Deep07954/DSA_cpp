#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    unordered_map<char, int> charCount;
    for (char c : str1) {
        charCount[c]++;
    }
    for (char c : str2) {
        if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
            return false;
        }
        charCount[c]--;
    }
    return true;
}
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    if (isAnagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}