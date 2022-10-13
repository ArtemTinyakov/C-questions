#include <iostream>

const int& f(const int& a)
{
    return a;
}

int main()
{
    int a = f(10);
    std::cout << a;                   //What will happen here?
    return 0;
}