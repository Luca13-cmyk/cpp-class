#include <iostream> // output and input operations

int main()
{
    // integer (whole number)
    int x; // declaration variable
    x = 5; // number of 5
    int y = 6;
    int sum = x + y;
    int age = 22;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n';

    // single caracter
    char grade = 'A';
    char initial = 'B';

    std::cout << grade << '\n';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // strings (objects that represents a sequence of characters)
    std::string name = "Luca";
    std::string day = "Wednesday";
    std::string food = "pizza";

    std::cout << name << '\n';
    std::cout << "Hello, " << name << '\n';
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}