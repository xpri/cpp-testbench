#include <iostream>

int main() 
{
    // //making my variables
    // int length  = 4;
    // int width = 3;
    // int area;
    // //initializing area
    // area = length * width;
    // std::cout << "length is: " << length << "\n";
    // std::cout << "width is: " << width << "\n";
    // std::cout << "area is: " << area << "\n";

    //declaring variables
    int x;
    std::cout << "Please type a number: ";
    std::cin >> x; //stores the typed number as x.
    //REMEMBER TO USE ">>" INSTEAD OF "<<"
    std:: cout << "Is this your number? " << x;
    return 0;
}