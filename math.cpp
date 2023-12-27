#include <iostream> // output and input operations
#include <cmath>
int main()
{
    double x = 3;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 4); // elevado
    // z = sqrt(9);
    // z = abs(-3); // 3
    // z = round(3.14); // 3
    // z = ceil(3.65); // 4
    z = floor(3.65); // 3

    std::cout << z << std::endl;

    return 0;
}