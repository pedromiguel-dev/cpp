#include <iostream>

int main(int argc, char const *argv[])
{
    double temp;
    char unit;

    std::cout << "************** CALCULATOR **************\n";

    std::cout << "Type C for celsius\n";
    std::cout << "Type F for Farenheight\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;


    switch (std::toupper(unit))
    {
    case 'F':
        std::cout << "Enter the temp in celsius: ";
        std::cin >> temp;

        temp = 1.8*temp+32;

        std::cout << "Temperature is " << temp << " degrees Farenheight";
        break;
    case 'C':
        std::cout << "Enter the temp in Farenheight: ";
        std::cin >> temp;

        temp = (temp - 32)/1.8;

        std::cout << "Temperature is " << temp << " degrees Celsius";
        break;
    
    default:
        std::cout << "invalid response, Only C or F";
        break;
    }

    std::cout << "\n****************************************";

    return 0;
}
