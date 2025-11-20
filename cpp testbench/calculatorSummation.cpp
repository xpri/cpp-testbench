#include <iostream> //iostream means standard input and output stream

int main() 
{
    int x;
    int y;
    std::cout << "Hello! Welcome to my Summation calculatior!" << "\n";
    std::cout << "Please input any integer x: ";
    std::cin >> x;
    // std::cout << "\n";
    std::cout << "Great! Now input any integer y: ";
    std::cin >> y;
    std::cout << "x + y = " << x + y;
    return 0;
}