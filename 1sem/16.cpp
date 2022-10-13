#include <iostream>

int main()
{
    int x{0};
    ++x++;
    std::cout << x;                   //What will happen here?
    return 0;
}