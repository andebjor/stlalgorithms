#include <algorithm>
#include <iostream>
#include <vector>


int main(void)
{
    std::vector<int> v{1, 50, 3, 9, 18};

    auto p = std::find_if(std::cbegin(v), std::cend(v), [](const auto &x){return x%5 == 0;});

    std::cout << *p << std::endl;

    return 0;
}
