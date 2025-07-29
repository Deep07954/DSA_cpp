# include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int sum = add(num1, num2);
    cout << "The sum is: " << sum << endl;
    system("pause");
    return 0;
}