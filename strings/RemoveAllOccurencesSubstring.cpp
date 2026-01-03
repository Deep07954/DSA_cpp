#include <bits/stdc++.h>
using namespace std;

int findSubstring(string s, string part) {
    int n = s.length(), m = part.length();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && s[i + j] == part[j])
            j++;
        if (j == m)
            return i;
    }
    return -1;
}

void removeSubstring(string &s, int pos, int len) {
    string temp = "";

    for (int i = 0; i < pos; i++)
        temp += s[i];

    for (int i = pos + len; i < s.length(); i++)
        temp += s[i];

    s = temp;
}

int main() {
    string s;
    cout << "Enter the main string: ";
    getline(cin, s);

    string part;
    cout << "Enter the substring to remove: ";
    getline(cin, part);


    int pos;
    while ((pos = findSubstring(s, part)) != -1) {
        removeSubstring(s, pos, part.length());
    }

    cout << s;
}
