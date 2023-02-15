#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float num1, num2;
    char operation;

    // Prompt user for input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation and display result
    if (operation == '+')
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    else if (operation == '-')
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    else if (operation == '*')
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    else if (operation == '/')
        cout << num1 << " / " << num2 << " = " << num1 / num2;
    else
        cout << "Invalid operator";

    return 0;
}
