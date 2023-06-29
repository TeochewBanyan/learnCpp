#include <iostream>

double func(const double &ra);

int main()
{
    // try three cases
    long edge = 5L;
    func(edge);
    std::cout << "case1" << std::endl;

    func(7.0);
    std::cout << "case2" << std::endl;

    double side = 3.0;
    func(side);
    std::cout << "case3" << std::endl;

    return 0;
}

double func(const double &ra)
{
    return ra + 1.0;
}