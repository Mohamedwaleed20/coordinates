/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    double a, b;
    std::cin >> a >> b;
    if ((a == 0) && (b == 0))
    {
        std::cout << "Origem" << std::endl;
    }
    else if ((a == 0))
    {
        std::cout << "Eixo Y" << std::endl;
    }
    else if ((b == 0))
    {
        std::cout << "Eixo X" << std::endl;
    }
    else if ((a > 0) && (b > 0))
    {
        std::cout << "Q1" << std::endl;
    }
    else if ((a < 0) && (b > 0))
    {
        std::cout << "Q2" << std::endl;
    }
    else if ((a < 0) && (b < 0))
    {
        std::cout << "Q3" << std::endl;
    }
    else if ((a > 0) && (b < 0))
    {
        std::cout << "Q4" << std::endl;
    }

    return 0;
}