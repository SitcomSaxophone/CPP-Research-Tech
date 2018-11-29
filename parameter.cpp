#include <iostream> // directive telling the file to use the standard cout, cin, and endl words from the iostream file

void printXY(int x, int y) // naming a function to be called in the main() function below
{
    std::cout << x<< std::endl; // output the value passed in for "x"
    std::cout << y << std::endl; // output the value passed in for "y"
}

void add(int a, int b)
{
    std::cout << a + b << std::endl; // output the sum of the numbers passed in for both "a" and "b"
}

int main()
{
    std::cout << "Enter Value For 'x': ";
    int x; // initialize an integer variable with no default value since it will change anyway
    std::cin >> x; // defines "x" as the value input by the user
    std::cout << "Enter Value For 'y': ";
    int y; // initialize an integer variable with no default value since it will change anyway
    std::cin >> y; // defines "y" as the value input by the user
    std::cout << "The values you entered were: " << std::endl;
    printXY(x, y); // call function defined above, passing in the values the user just set for both "x" and "y"
    std::cout << "The sum of these two numbers is: ";
    add(x, y); // call function defined above, passing in the values the user just set for both "x" and "y"
    return 0;
}