#include <iostream>

int main()
{
    int x{5};
    int* p = &x;
    std::cout << *p << '\n';
    delete p;
    std::cout << *p;
    return 0;
}