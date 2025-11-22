#include<bits/stdc++.h>
using namespace std;
void RemoveSpaces(char str[]){
    int i=0;
    int n=strlen(str);
    for(int j=0;j<n;j++){
        if(str[j]!=' '){
            str[i]=str[j];
            i++;
        }
    }
    str[i]='\0';
}
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    RemoveSpaces(str);
    cout<<"String after removing spaces: "<<str<<endl;
return 0;
}