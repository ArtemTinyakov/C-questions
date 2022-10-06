#include <iostream>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << a[&a[1] - &a[3] + &a[12] - &a[6]];    //What will happen here?
    return 0;
}