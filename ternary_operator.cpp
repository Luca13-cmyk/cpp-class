#include <iostream> // output and input operations

int main()
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2

    int grade = 85;
    std::string fail = "you fail!";
    std::string pass = "you pass!";

    grade >= 60 ? std::cout << pass : std::cout << fail;

    return 0;
}