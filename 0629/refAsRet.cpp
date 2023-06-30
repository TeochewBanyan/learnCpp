#include <iostream>

int &Add(int &a, const int &source);

int main()
{
    int a = 1, source = 5;
    int four = 4;

    Add(a, source) = four;
    std::cout << "The result is " << a << std::endl;
    return 0;
}

const int &Add(int &a, const int &source)
{
    a += source;
    return a;
}