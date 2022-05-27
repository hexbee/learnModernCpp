#include <iostream>

struct MyObj {
    auto getValueCopy() {
        return [*this] { return value; };
    }
    auto getValueRef() {
        return [this] { return value; };
    }
    int value {123};
};

int main()
{
    MyObj mo;
    auto valueCopy = mo.getValueCopy();
    auto valueRef = mo.getValueRef();
    mo.value = 321;
    std::cout << valueCopy() << std::endl;
    std::cout << valueRef() << std::endl;
}
