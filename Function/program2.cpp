#include <iostream>
using namespace std;
int sub(int a, int b) {
    return a - b;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int difference = sub(num1, num2);
    cout << "The difference is: " << difference << endl;
    system("pause");
    return 0;
}