
#include <iostream>
#include <string>

/*
    int  age = 0;


*/

int age;


int main()
{
    std::cout << "What is your age: ";
    std::cin >> age;
    std::cout << "Your age is " << age << std::endl;

    if (age >= 20) {

        std::cout << "You are an adult";
    }

    else (age < 20); {

        std::cout << "You are a teenager";
   }
}
