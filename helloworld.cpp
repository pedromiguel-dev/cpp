
#include <iostream>

namespace MATH {
    const double PI = 3.14159;

    double circle_circum(double radius)
    {
        return 2 * PI * radius;
    }
}

int main(int argc, char const *argv[])
{
    double radius = 10;
    std::cout << MATH::circle_circum(radius) << " cm" << std::endl;

    return 0;
}
