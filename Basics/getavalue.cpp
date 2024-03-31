#include<iostream>

int main(){
    //get a value from the user
    std::cout<<"Enter an integer: ";
    int num { };
    std::cin>>num;

    //Print the doubled number
    std::cout<<num<<" doubled is: "<<num*2<<'\n';

    return 0;

}