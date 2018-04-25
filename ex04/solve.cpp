#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>


int main(void)
{
    std::vector<int> v1{2, 3, 4, 5};
    std::vector<int> v2;

    std::transform(std::cbegin(v1), std::cend(v1), std::back_inserter(v2), [](const auto &x){return 2*x;});

    auto oi = std::ostream_iterator<int>(std::cout, " ");
    std::copy(std::cbegin(v2), std::cend(v2), oi);
    std::cout << std::endl;

    return 0;
}
