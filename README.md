# Exp-4-Bitwise-Operator
# Aim
1. Take two numbers as input from user and perform bitwise logical operations on those numbers.
2. Take a number as input from user along with bit position numbers to be set and reset in the inputted number.
# Software Used
VS Code and c++ online compiler.
# Theory
The first program demonstrates bitwise operations such as AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>). These operations work on the binary representation of numbers.
The second program illustrates how to modify specific bits of a number by using bitwise operators. The OR operator is used to set a bit (turn it to 1), while the AND operator combined with a negated bitmask is used to reset a bit (turn it to 0).
# Program Code
```
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
```
```
//Performance of set and reset in the inputted number.

#include <iostream>
using namespace std;
int main() {
    int num, setPos, resetPos;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0-based index): ";
    cin >> setPos;
    cout << "Enter the bit position to reset (0-based index): ";
    cin >> resetPos;
    cout << "\nOriginal number: " << num << endl;
    int setMask = (1 << setPos);
    num = num | setMask;
    cout << "Number after setting bit " << setPos << ": " << num << endl;
    int resetMask = ~(1 << resetPos);
    num = num & resetMask;
    cout << "Number after resetting bit " << resetPos << ": " << num << endl;
    return 0;
}
```
# Output
### Bitwise logical operations
![image](https://github.com/user-attachments/assets/da72c2d4-26b7-494b-9e4a-2b315315f299)
### Set and Reset operations
![image](https://github.com/user-attachments/assets/44483af3-9726-44ef-b275-65ea1e517024)
# Conclusion
We learnt essential bitwise logical operations such as AND, OR, XOR, NOT, and shifting, which are fundamental in optimizing data handling and controlling bits.
We also learnt how to set and reset specific bits using bitwise operators.
