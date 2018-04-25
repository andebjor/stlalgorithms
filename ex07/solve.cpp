#include <algorithm>
#include <iostream>
#include <vector>


int main(void)
{
    std::vector<int> v{1, 500, 345, 6, 3, 6};

    auto n = std::count_if(std::begin(v), std::end(v), [](const auto &x){return x > 100;});

    std::cout << n << std::endl;

    return 0;
}
