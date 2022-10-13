#include <iostream>

int main()
{
    signed char a{'a'}, b{'b'}, c;
    c = a+b;
    std::cout << c;                         //What will happen here?
    return 0;
}