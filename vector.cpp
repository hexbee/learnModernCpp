#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> v{};
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    std::for_each(v.cbegin(), v.cend(), [](const auto& item){ std::cout << item << std::endl; });
}
