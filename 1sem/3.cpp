#include <iostream>

int main()
{
    int a = 3;

    for(int& i = a; i > 0; std::cout << a--)              //What will happen here?

    return 0;
}