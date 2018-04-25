#include <algorithm>
#include <iostream>
#include <string>


int main(void)
{
    std::string s{"aaccdffgfgfgiili"};

    std::sort(std::begin(s), std::end(s));
    auto p = std::unique(std::begin(s), std::end(s));
    s.erase(p, std::end(s));

    std::cout << s << std::endl;

    return 0;
}
