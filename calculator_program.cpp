#include <iostream>

int main()
{

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********* CALCULATOR ****************" << std::endl;

    std::cout << " Enter either (+ - * /)";
    std::cin >> op;

    std::cout << "Enter #1: ";

    std::cin >> num1;

    std::cout << "Enter #2: ";

    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        std::cout << "Enter a valid operation";
        break;
    }

    std::cout << "Result: " << result << std::endl;

    std::cout << "*************************";

    return 0;
}