#include <iostream>

void print(char const* str) { std::cout << str; }
void print(short num) { std::cout << num; }

int main()
{
	// What will happen?
	print("abc");
	print(0);
	print('A');
}