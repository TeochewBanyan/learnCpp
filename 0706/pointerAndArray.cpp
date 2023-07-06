#include <iostream>

// try and test pointer, array, ref

int main()
{
    int a[10];
    int *pa1 = a;
    int(*pa2)[10] = &a;
    int *pa3 = &a[0];
    std::cout << "This is the address of first pointer: " << pa1 << std::endl;
    std::cout << "This is the address of second pointer: " << pa2 << std::endl;
    std::cout << "This is the address of third pointer: " << pa3 << std::endl;

    std::cout << "----- If we move the pointer -------" << std::endl;

    std::cout << "This is the address of first pointer: " << pa1 + 1 << std::endl;
    std::cout << "This is the address of second pointer: " << pa2 + 1 << std::endl;
    std::cout << "This is the address of third pointer: " << pa3 + 1 << std::endl;

    return 0;
}