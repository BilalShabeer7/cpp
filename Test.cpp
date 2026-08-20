#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a four-digit integer: ";
    cin >> number;

    int digit1 = number % 10;
    number = number / 10;

    int digit2 = number % 10;
    number = number / 10;

    int digit3 = number % 10;
    number = number / 10;

    int digit4 = number % 10;

    cout << digit1 << "  "
         << digit2 << "  "
         << digit3 << "  "
         << digit4 << endl;

    return 0;
}
