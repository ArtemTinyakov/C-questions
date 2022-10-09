#include <iostream>

int main()
{
    int i{0};
    i = ++i + i++;
    std::cout << i;              //What will happen here?
    return 0;
}