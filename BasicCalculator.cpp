// Basic C++ Calculator

#include <iostream>
#include <string>
using namespace std;

int main() {
    int number_1, number_2, result;
    char op;
    string input_string;

    cout << "Welcome to the Basic C++ Calculator" << endl;
    cout << "Enter your first number: ";
    cin >> number_1;
    cout << "Enter your second number: ";
    cin >> number_2;
    cout << "What would you like to do to the two numbers? (+, -, *, /, %): ";
    cin >> op;

    switch (op)
    {
    case '+':
        result = number_1 + number_2;
        cout << number_1 << " + " << number_2 << " = " << result << endl;
        break;
    case '-':
        result = number_1 - number_2;
        cout << number_1 << " - " << number_2 << " = " << result << endl;
        break;
    case '*':
        result = number_1 * number_2;
        cout << number_1 << " * " << number_2 << " = " << result << endl;
        break;
    case '/':
        result = number_1 / number_2;
        cout << number_1 << " / " << number_2 << " = " << result << endl;
        break;
    case '%':
        result = number_1 % number_2;
        cout << number_1 << " % " << number_2 << " = " << result << endl;
        break;
    default:
        cout << "That operator didn't work :/" << endl;
        break;
    }

    return 0;
}