#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(0)); // Seed the random number generator
    int randnum = (rand() % 5) + 1;

    std::cout << "rand num: " << randnum << std::endl;

    switch (randnum)
    {
        case 1: std::cout << "You win a bumper sticker" << std::endl; break;
        case 2: std::cout << "You win a egg" << std::endl; break;
        case 3: std::cout << "You win a free lunch" << std::endl; break;
        case 4: std::cout << "You win a gift card" << std::endl; break;
        case 5: std::cout << "You win 1000 dolars" << std::endl; break;
    }

    return 0;
}
