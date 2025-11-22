#include <bits/stdc++.h>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name,100);
    for(int i=0;i<8;i++){
        if(i==2 ||i==6){
            name[i]='\0';
        }
     
    }
    
    // cout<<"Your name is "<<name<<endl;
    for(int i=0;i<8;i++){
        cout<<"index at "<<i<<" is "<<name[i]<<endl;
    }
    // int value=int(name[6]);
    // cout<<"The value at index 6 is "<<value<<endl;
}