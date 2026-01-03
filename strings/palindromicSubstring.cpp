#include<bits/stdc++.h>
using namespace std;
int expandAroundIndex(string s,int left,int right){
    int count=0;
    while(left>=0 && right<s.length() && s[left]==s[right]){
        count++;
        left--;
        right++;
    }
    return count;
}
int countPalindromicSubstrings(const string& s){
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        // Odd length palindromes
        int oddkaAns=expandAroundIndex(s,i,i);
        count+=oddkaAns;
        // int left=i,right=i;
        // while(left>=0 && right<n && s[left]==s[right]){
        //     count++;
        //     left--;
        //     right++;
        // }
        // Even length palindromes
        int evenKaAns=expandAroundIndex(s,i,i+1);
        count+=evenKaAns;
        // left=i;right=i+1;
        // while(left>=0 && right<n && s[left]==s[right]){
        //     count++;
        //     left--;
        //     right++;
        }
        return count;
    }
// TIME COMPLEXITY: O(N^2)
// SPACE COMPLEXITY: O(1)
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int result=countPalindromicSubstrings(str);
    cout<<"Total palindromic substrings: "<<result<<endl;
}