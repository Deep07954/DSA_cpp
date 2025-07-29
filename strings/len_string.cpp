#include<iostream>
using namespace std;

int main() {
    char str[10];
    cout << "Enter a string: ";
    cin.getline(str, 10);
    int i =0,count=0;
    for(i=0;str[i]!='\0';i++) {
        cout << str[i] << " ";
        count++;
    }
   cout << "Length of string: " << count << endl;

    return 0;
}