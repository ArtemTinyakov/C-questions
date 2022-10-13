#include <iostream>

int main()
{
    int x{0};
    sizeof(++x);
    std::cout << x;                     //What will happen here?
    return 0;
}