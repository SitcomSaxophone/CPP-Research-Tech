#include <iostream> // directive telling the file to use the standard cout, cin, and endl words from the iostream file

int main()
{
    std::cout << "Enter a number: "; // ouput text to the user to have them enter a number
    int x; // initialize variable "x". This does not need a default value as it is going to change anyway
    std::cin >> x; // define "x" as whatever number is input by the user
    std::cout << "You entered " << x << std::endl; // output text letting the user know what number it is they input for "x"
    return 0; // must return something to finish the execution
}