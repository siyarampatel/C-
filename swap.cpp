#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Input two numbers
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Output after swap
    cout << "After swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
}
