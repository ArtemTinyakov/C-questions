int main()
{
    int a, b;
    const int* c = &a;
    c = &b;              //What will happen here?
    *c = 1;              //What will happen here?
    return 0;
}