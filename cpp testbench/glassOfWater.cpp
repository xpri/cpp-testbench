/*This is a program that measures how much water is left/in a standard 16 oz cup of water.
Program first asks user for size of up and duration of being left under the fridge water spout.
By calculating the average velocity of water flow, it determines the remaining air space in the cup.
It can also measure how much water flowed into the cup if asked.
James Aspilcueta 11/14/24*/

#include <iostream>
#include <string>


int main()
{
    int request;

    std::cout << "***************** Glass of Water *****************" << '\n';
    std::cout << "What do you want to determine? Air left (1) or water in (2)? ";
    std::cin >> request;

    //now we have to make sure that char is either 1 or 2.... make sure to finish this up james.

    switch(request)
    {   
    case 1:
        std::cout << "You have requested to determine the amount of air left in the cup." << "\n";
        break;
    case 2:
        std::cout << "You have requested to determine the amount of water left in the cup. " << "\n";
        break;
    default:
        std::cout << "Please enter either a 1 or 2." << "\n";
        break;
    }

    
    
    std::cout << "**************************************************";
    return 0;
}