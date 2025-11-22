#include <bits/stdc++.h>
using namespace std;
int main(){
string str;
    cout<<"Enter your name: ";
    getline(cin, str);
    for(int i=0;i<8;i++){
        if(i==2 ||i==6){
            str[i]='\0';
        }
     
    }
    
    // cout<<"Your name is "<<name<<endl;
    for(int i=0;i<8;i++){
        cout<<"index at "<<i<<" is "<<str<<endl;
    }
    // int value=int(name[6]);
    // cout<<"The value at index 6 is "<<value<<endl;
}
