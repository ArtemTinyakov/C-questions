#include <iostream>

int main()
{
    char a;
    std::cout << sizeof(a) << ' ' << sizeof(+a);          //What will happen here?
    return 0;
}