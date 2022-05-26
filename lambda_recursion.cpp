#include <iostream>
#include <functional>

int main()
{
    std::function<int(int)> factorial = [&factorial](int n){
        return n > 1 ? n * factorial(n-1) : 1;
    };

    std::cout << factorial(1) << std::endl;
    std::cout << factorial(2) << std::endl;
    std::cout << factorial(3) << std::endl;
    std::cout << factorial(4) << std::endl;
    std::cout << factorial(5) << std::endl;
    return 0;
}
