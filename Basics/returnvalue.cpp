// This program will work successfully.
#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int inputValue = getValueFromUser();

    int num{inputValue}; //The num variable will be intialized with the return value of the getValueFromUser();

    std::cout << num << " dobuled is: " << num * 2 << '\n';

    return 0;
}