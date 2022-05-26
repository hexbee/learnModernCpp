#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    const size_t result = std::count_if(v.begin(), v.end(), std::bind2nd(std::less<int>(), 3));
    // const size_t result = std::count_if(v.begin(), v.end(), [](int x){return x < 3;});
    std::cout << result << std::endl;

    return 0;
}
