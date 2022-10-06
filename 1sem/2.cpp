int main()
{
    int a, b;
    int* const c = &a;
    *c = 1;             // What will happen here?
    c = &b;             // What will happen here?
    return 0;
}