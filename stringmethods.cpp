#include <iostream>

int main(int argc, char const *argv[])
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()){
        std::cout<< "Yout didnt enter your name :<.." << std::endl;
        return 1;
    }
    

    std::cout << "\nthe lenght of name " << name << " is: " << name.length() << std::endl;
    std::cout << "Email is " << name.append("@gmail.com") << std::endl;
    std::cout << "First carachter is " << name.at(0) << std::endl;
    std::cout << "Name now is " << name.insert(0, "B") << std::endl;

    return 0;
}
