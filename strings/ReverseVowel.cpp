#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}
string ReverseVowel(string s){
    int n=s.length();
    int i=0;
    int j=n-1;
    // unordered_set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
  
    while (i < j) {
        if (!isVowel(s[i])) {
            i++;
        }
        else if (!isVowel(s[j])) {
            j--;
        }
        else {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;



    // while(i<j){
    //     while(i<j && vowels.find(s[i])==vowels.end()){
    //         i++;
    //     }
    //     while(i<j && vowels.find(s[j])==vowels.end()){
    //         j--;
    //     }
    //     if(i<j){
    //         swap(s[i],s[j]);
    //         i++;
    //         j--;
    // 
// }

    // }
    // return s;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string result=ReverseVowel(str);
    cout<<"String after reversing vowels: "<<result<<endl;
}
