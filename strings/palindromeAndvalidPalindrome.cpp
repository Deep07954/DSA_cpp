#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& str,int left,int right) {
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
bool validPalindrome(const string& str,int left,int right){
    
     while(left < right) {
        if (str[left] != str[right]) {
            return isPalindrome(str,left + 1, right) || isPalindrome(str, left, right - 1);
        }
        else{
        left++;
        right--;}
     }
     return true;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    if(validPalindrome(str,0,str.length()-1)){
        cout<<"The string is a palindrome."<<endl;
    }
    else{
        cout<<"The string is not a palindrome."<<endl;
    }
}