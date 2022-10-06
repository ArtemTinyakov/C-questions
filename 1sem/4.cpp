#include <iostream>

struct B { void getinfo() { std::cout << "B\n";} };
struct C { private: void getinfo() { std::cout << "C\n";} };
struct D : B,C {};

int main()
{
    D().getinfo();                    //What will happen here?
    return 0;
}