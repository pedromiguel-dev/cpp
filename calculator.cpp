#include <iostream>
#include <cmath>


bool verify (char op){
    switch (op)
    {
        case '+':
            return true;
            break;
        case '-':
            return true;
            break;
        case '*':
            return true;
            break;
        case '/':
            return true;
            break;
        default:
            return false;
            break;
    }
}
void calculate(char op, double number1, double number2, double & result){
    switch (op)
    {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        default:
            result = 0;
            break;
    }
}

int main(int argc, char const *argv[])
{
    char op;
    double number1, number2, result;

    std::cout << "************** CALCULATOR **************\n";

    std::cout << "Select operation\n";
    std::cout << "Operation: +\n";
    std::cout << "Operation: -\n";
    std::cout << "Operation: *\n";
    std::cout << "Operation: /\n";
    std::cin >> op;
    if (!verify(op)){
        std::cout << "Enter a valid operation....\n";
        return 1;
    }

    std::cout << "Enter first number: \n";
    std::cin >> number1;
    
    std::cout << "Enter second number: \n";
    std::cin >> number2;

    calculate(op, number1, number2, result);

    std::cout << "The result is " << result << std::endl;

    std::cout << "\n****************************************";

    return 0;
}
