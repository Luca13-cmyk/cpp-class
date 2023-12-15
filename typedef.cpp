#include <iostream> // output and input operations
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// using (same effect)
using text_t = std::string;

int main()
{
    // typedef keyword used to create an additional name (alias) for another data type. New identifier for an existing type helps with readability and reduces typos
    // use when there is a clear benefit. Replace with 'using' (work better w/ templates)

    // instead of
    // std::vector<std::pair<std::string, int>> pairlist;
    // use
    pairlist_t pairlist;

    // instead of
    // std::string name = "Luca";
    // use
    text_t name = "Luca";

    std::cout << name;

    return 0;
}