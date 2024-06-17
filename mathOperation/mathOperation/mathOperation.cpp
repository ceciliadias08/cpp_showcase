// mathOperation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float firstVariable, secondVariable, result;
    char op;

    std::cout << "Enter the fisrt number: " << std::endl;
    std::cin >> firstVariable;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> secondVariable;
    std::cout << "Enter the math operator (+,-,/,*): " << std::endl;
    std::cin >> op;

    switch (op) {
        case '+': result = firstVariable + secondVariable;
        break;

        case '-': result = firstVariable + secondVariable;
            break;

        case '*': result = firstVariable + secondVariable;
            break;

        case '/': result = firstVariable + secondVariable;
            break;

        default: std::cout << "Operation error, please try a valid number or operator" << std::endl;
    }
    std::cout << firstVariable << op << secondVariable << " = " << result << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
