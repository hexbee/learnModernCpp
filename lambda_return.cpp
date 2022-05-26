#include <iostream>

auto createLambda(int y) {
    return [y](int x) { return x + y; };
}

int main() {
    auto lam = createLambda(10);
    std::cout << lam(32) << std::endl;
    return 0;
}
