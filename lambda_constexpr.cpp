int main()
{
    // 1
    auto identity = [](int n) constexpr { return n; };
    static_assert(identity(123) == 123);

    // 2
    constexpr auto add = [](int x, int y) {
        auto L = [=] { return x; };
        auto R = [=] { return y; };
        return [=] { return L() + R(); };
    };
    static_assert(add(1, 2)() == 3);

    return 0;
}
