#include <iostream>

void f(int& a)
{
    std::cout << "0\n";
}

void g(int&& a)
{
    std::cout << "1\n";
}

template <class T>
void h(T&& a)
{
    std::cout << "3\n";
}

int main()
{
    int a{228};

    f(a), f(228);                  //What will happen here?

    g(a), g(228);                  //What will happen here?

    h(a), h(228);                  //What will happen here?

    return 0;
}