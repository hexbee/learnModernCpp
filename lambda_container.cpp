#include <functional>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::function<std::string(const std::string&)>> v;

    v.emplace_back([](const std::string& x) {
        return x + " Amazing";
    });
    v.emplace_back([](const std::string& x) {
        return x + " Modern";
    });
    v.emplace_back([](const std::string& x) {
        return x + " C++";
    });
    v.emplace_back([](const std::string& x) {
        return x + " World!";
    });

    std::string temp = "Hello";
    for (auto &entryFunc : v)
    {
        temp = entryFunc(temp);
    }

    std::cout << temp << std::endl;
}
