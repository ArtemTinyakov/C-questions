#include <iostream>

int f(...)
{
    std::cout << 1;
    return 2;
}

int g(...)
{
    std::cout << 2;
    return 3;
}

int main()
{
    f() + g() * g();                          //What will happen here?
    return 0;
}