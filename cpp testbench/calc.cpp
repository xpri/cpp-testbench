#include <iostream>
#include <cmath>

int main() 
{
    double num1;
    double num2;
    double result;
    char op;

    std::cout << "************* Calculator *************" << "\n";

    std::cout << "Please enter which operation you desire (+, -, *, /, %): ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Your result is: " << result << "!" << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Your result is: " << result << "!" << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Your result is: " << result << "!" << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Your result is: " << result << "!" << "\n";
        break;
    case '%':
        result = fmod(num1, num2);
        std::cout << "Your remainder is: " << result << "!";
        break;
    default:
        std::cout << "Please enter a valid operation (+, -, *, /, %)" << "\n";
        break;
    }

    std::cout << "Please enter your first number: ";
    std::cin >> num1;

    std::cout << "Please enter your second number: ";
    std::cin >> num2;
    
    std::cout << "**************************************";
    return 0;
}