#include <iostream> // output and input operations
#include <string>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{

    std::string name;
    std::string fullname;
    int age;

    // std::cout << "Whats your name?: ";
    // std::cin >> name; // Input catch the first phrase

    // std::cout << "Whats your full name?: ";
    // std::getline(std::cin, fullname); // Input catch all the phrases and spaces * he needs to be first of others inputs

    std::cout << "Whats your age?: ";
    std::cin >> age; // Input

    // to Fix that, add this line
    // std::cin >> std::ws (spaces)
    std::cout << "Whats your full name?: ";
    std::getline(std::cin >> std::ws, fullname); // Input catch all the phrases and spaces * he needs to be first of others inputs

    // std::cout << "Hello, " << name << std::endl;                  // Output
    std::cout << "You are " << fullname << std::endl;
    std::cout << "You are " << age << " years old." << std::endl; // Output

    return 0;
}