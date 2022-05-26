#include <iostream>

void reference(int& v) {
    std::cout << "左值" << std::endl;
}

void reference(int&& v) {
    std::cout << "右值" << std::endl;
}

template <typename T>
void pass(T&& v) {
    std::cout << "普通传参:";
    reference(v);
}

int main() {
    std::cout << "传递右值:" << std::endl;
    pass(1);

    std::cout << "传递左值:" << std::endl;
    int l = 1;
    pass(l);

    return 0;
}
