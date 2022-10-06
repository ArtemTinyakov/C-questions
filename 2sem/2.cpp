#include <iostream>

template <class T>
class A{

    public:

    void f(const T& a) { std::cout << "0\n"; }

    void g(T&& a) { std::cout << "1\n"; }
};

int main()
{
    A<int> a;
    int b = 322;

    a.f(b), a.f(322);               //What will happen here?

    a.g(b), a.g(322);               //What will happen here?

    return 0;
}