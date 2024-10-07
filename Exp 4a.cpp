//performance of bitwise logical operations.

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "\nResults of bitwise operations:\n";
    cout << "num1 & num2 (Bitwise AND): " << (num1 & num2) << endl;
    cout << "num1 | num2 (Bitwise OR): " << (num1 | num2) << endl;
    cout << "num1 ^ num2 (Bitwise XOR): " << (num1 ^ num2) << endl;
    cout << "~num1 (Bitwise NOT of num1): " << (~num1) << endl;
    cout << "num1 << 1 (Left shift num1 by 1): " << (num1 << 1) << endl;
    cout << "num2 >> 1 (Right shift num2 by 1): " << (num2 >> 1) << endl;
    return 0;
}
