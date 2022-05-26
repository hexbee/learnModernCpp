#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    struct PrintFunctor
    {
        void operator() (int x) const
        {
            std::cout << x << std::endl;
        }
    };

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::cout << "仿函数方式" << std::endl;
    std::for_each(v.begin(), v.end(), PrintFunctor());

    return 0;
}
