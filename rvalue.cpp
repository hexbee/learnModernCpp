#include <iostream>
#include <utility>

void f(int& x)
{
    std::cout << "call f(int& x)" << std::endl;
}

void f(int&& x)
{
    std::cout << "call f(int&& x)" << std::endl;
}

int main()
{
    int x = 0;
    int& xl = x;
    // int&& xr = x;
    int&& xr2 = 0;

    f(x);
    f(xl);

    f(3);
    f(std::move(x));
    f(xr2);
    f(std::move(xr2));
}
