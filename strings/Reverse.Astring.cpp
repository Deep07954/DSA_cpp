#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    // cin.getline(str, 100);
    int n=strlen(str);
    int i=0;
    int j=n-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<"Reversed string is: "<<str<<endl;
    cout<<"length of string is: "<<strlen(str)<<endl;
    // cout<<"length of string is: "<<str.length(str)<<endl;
    // reverse(str, str + n);
    // cout<<"Reversed string is: "<<str<<endl;
return 0;
}