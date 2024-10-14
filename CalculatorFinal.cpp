/******************************************************************************

 CSCI 1101 - Calculator (Part A)

 Team Coordinator: [Viviana Moro-Ochoa]

 Collaborator #1: [Student's name]
 Collaborator #2: [Student's name]

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

double add(double a, double b);
double subtract(double a, double b);

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    default:
        cerr << "Error: Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}

// Feature 1: Addition
// Created by: [Collaborator #1]
double add(double a, double b) {
    return a + b;
}

// Feature 2: Subtraction.
// Created by: [Collaborator #2]
double subtract(double a, double b) {
    return 0;
}
