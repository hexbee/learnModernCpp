#include <iostream>
#include <vector>
#include <algorithm>

void printFunc(int x)
{
    std::cout << x << std::endl;
}

struct PrintFunctor
{
    PrintFunctor(std::string y_)
    {
        y = y_;
    }
    void operator() (int x) const
    {
        std::cout << y << " " << x << std::endl;
    }
    std::string y;
};

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::cout << "函数指针方式" << std::endl;
    void (*fp)(int x) = printFunc;
    std::for_each(v.begin(), v.end(), fp);

    std::cout << "仿函数方式" << std::endl;
    std::for_each(v.begin(), v.end(), PrintFunctor("Hello"));

    std::cout << "lambda表达式方式" << std::endl;
    std::string s = "hello";
    std::for_each(v.begin(), v.end(), [s](int x){ std::cout << s << " " << x << std::endl; });

    return 0;
}
