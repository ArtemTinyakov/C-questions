#include <iostream>

int main()
{
    int a[]{1, 2, 3};
    std::cout << a[10] << '\n';                     //What will happen here?
    std::cout << a[100000000];                      //What will happen here?
    return 0;
}