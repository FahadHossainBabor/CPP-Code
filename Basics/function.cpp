#include <iostream>

// Define user defined function doPrint()
void doPrint() // doPrint() is the called function in this program.
{
    std::cout << "In doPrint()\n";
}

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";

    doPrint(); // Interrupt main() by making a function call doPrint(). main() is the caller function.

    std::cout << "Ending of main()\n";

    return 0;
}