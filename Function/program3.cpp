#include <iostream>
using namespace std;
int mul(int a, int b) {
    return a * b;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int product = mul(num1, num2);
    cout << "The product is: " << product << endl;
    system("pause");
    return 0;
}