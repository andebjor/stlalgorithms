#include <algorithm>
#include <iostream>
#include <vector>


int main(void)
{
    std::vector<int> v{1, 500, 345, 6, 3, 6};

    std::stable_partition(std::begin(v), std::end(v), [](const auto &x){return x > 100;});

    for (auto e : v)
        std::cout << e << " ";

    std::cout << std::endl;

    return 0;
}
