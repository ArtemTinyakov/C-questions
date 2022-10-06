#include <iostream>

struct A{
    double& a;
};

struct B{
    double* b;
};

int main()
{
    std::cout << sizeof(A) << sizeof(double&);     //What will happen here?
    std::cout << sizeof(B) << sizeof(double*);     //What will happen here?
    return 0;
}