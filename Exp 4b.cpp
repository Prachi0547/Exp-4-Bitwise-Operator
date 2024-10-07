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
