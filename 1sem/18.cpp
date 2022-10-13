#include <iostream>

const int x{10};

int main()
{
    const int x{5};
    {
        int x{1};
        int a[::x] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};            //What will happen here?
    }
    return 0;
}