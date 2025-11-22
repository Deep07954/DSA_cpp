#include<bits/stdc++.h>
using namespace std;
bool CompareString(char str1[], char str2[]){
    int n1=strlen(str1);
    int n2=strlen(str2);
    if(n1!=n2){
        return false;
    }
    for(int i=0;i<n1;i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    char str1[100], str2[100];
    cout<<"Enter first string: ";
    cin.getline(str1, 100);
    cout<<"Enter second string: ";
    cin.getline(str2, 100);
    if(CompareString(str1, str2)){
        cout<<"Strings are equal"<<endl;
    } else {
        cout<<"Strings are not equal"<<endl;
    }
}