#include <iostream> // output and input operations
namespace first
{
    int x = 1;

}

namespace second
{
    int x = 2;
}

int main()
{
    // Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
    /*
    int x = 0;

    std::cout << x;         // 0
    std::cout << first::x;  // 1
    std::cout << second::x; // 2
    std::cout << "\n";
    */
    /*
     using namespace first;
     std::cout << "using namespace first" << std::endl;
     std::cout << x; // 1
    */

    // using namespace std;  or
    using std::cout;
    using std::endl;
    using std::string;

    string name = "Luca";
    cout << "Welcome" << endl;
    cout << name << endl;

    return 0;
}