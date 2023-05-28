#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Seed the random number generator
    int num = (rand() % 20) + 1; 

    std::cout << "rand num: " << num << std::endl;

    return 0;
}
