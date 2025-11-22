#include<bits/stdc++.h>
using namespace std;
int main() {
    int a = 10;
    int *p = &a; // Pointer p holds the address of variable a
    cout << "Value of a: " << a << endl; // Output the value of a
    cout << "Address of a: " << &a << endl; // Output the address of a
    cout << "Value of pointer p (address of a): " << p << endl; // Output the value of pointer p
    cout << "Value pointed to by p: " << *p << endl; // Output the value at the address stored in p
    return 0;
}
