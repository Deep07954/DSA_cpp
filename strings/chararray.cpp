#include<iostream>
using namespace std;

int main() {
    char str[11];
    cout<<"Enter a string: ";
    cin.getline(str, 11);
    cout<<"You entered: "<<str<<endl;
    int i =0;
    for(i=0;str[i]!='\0';i++) {
        cout<<"value at index "<<i<<" is: "<<str[i]<<endl<<" ";
    }
    cout << endl;
    return 0;
}