#include <iostream>
int plusOne(int a);
int plusTwo(int);
int getResult(int a, int (*pf)(int));
// def two funcs
// a+1
int plusOne(int a)
{
    return a + 1;
}

int plusTwo(int b)
{
    return b + 2;
}

int main()
{
    int a = 0;
    // function pointer
    int (*pF)(int);
    pF = plusOne;
    int b = getResult(a, pF);
    std::cout << "The result of plusOne is" << b << std::endl;
    pF = plusTwo;
    b = getResult(a, pF);
    std::cout << "The result of plusTwo is" << b << std::endl;
    return 0;
}

// get a function, a int
// return the result
int getResult(int a, int (*pf)(int))
{
    // the two usages should be the same
    int b = (*pf)(a);
    std::cout << "the result of pf(a) is:" << pf(a) << std::endl;
    return b;
}
