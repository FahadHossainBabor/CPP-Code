//This program doesn't work
#include<iostream>

void getValueFromUser()
{
    std::cout<<"Enter an integer: ";
    int input { };
    std::cin>>input;
}

int main()
{
    getValueFromUser(); //Asking for input

    int num{}; //How do we get value form the getValueFromUser() and use it to initialize this variable?

    std::cout<<num<<" dobuled is: "<<num*2<<'\n';

    return 0;
}