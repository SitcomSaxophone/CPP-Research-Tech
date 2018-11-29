#include <iostream>

void printXY(int x, int y) 
{
    std::cout << x<< std::endl;
    std::cout << y << std::endl;
}

void add(int a, int b)
{
    std::cout << a + b << std::endl;
}

int main()
{
    std::cout << "Enter Value For 'x': ";
    int x;
    std::cin >> x;
    std::cout << "Enter Value For 'y': ";
    int y;
    std::cin >> y;
    std::cout << "The values you entered were: " << std::endl;
    printXY(x, y);
    std::cout << "The sum of these two numbers is: ";
    add(x, y);
    return 0;
}