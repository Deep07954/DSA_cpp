#include<bits/stdc++.h>
using namespace std;
char toUpperCase(char ch){
    if(ch>='a' && ch<='z'){
        if(ch)
        return ch-'a'+'A';
    }
    return ch;
}
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        str[i]=toUpperCase(str[i]);
    }
    cout<<"String in uppercase: "<<str<<endl;

}