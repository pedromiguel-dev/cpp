#include <iostream>

int main(int argc, char const *argv[])
{
    std::string name;
    int age;

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "Whats your name? ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old..." << std::endl;
    return 0;
}
