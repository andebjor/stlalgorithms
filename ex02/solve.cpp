#include <algorithm>
#include <iostream>
#include <string>


int main(void)
{
    std::string s1{"algorithms are fun"};
    std::string s2{"are"};

    auto it = std::search(std::cbegin(s1), std::cend(s1), std::cbegin(s2), std::cend(s2));

    if (it != s1.end()) {
         std::cout << it - std::cbegin(s1) << std::endl;
    }

    return 0;
}
