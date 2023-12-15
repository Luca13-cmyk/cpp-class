#include <iostream> // output and input operations

int main()
{
    // type conversion = conversion a value of one data type to another
    //      Implicit = automatic
    //      Explicit = Precede value  with new data value (int) x;

    // double x = (int)3.14;

    // std::cout << x << std::endl;

    char y = 100;
    std::cout << y;

    // the same effect
    std::cout << (char)100;

    std::cout << std::endl;

    // integer division

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    std::cout << score << "%" << std::endl;

    return 0;
}