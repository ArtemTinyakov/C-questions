int main()
{
    int x;
    (2 < 3 ? ++x : x++) = 5;             //What will happen here?
    (2 < 3 ? ++x : x) = 5;               //What will happen here?
    (2 < 3 ? ++x : x++);
    return 0;
}