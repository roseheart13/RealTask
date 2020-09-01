
#include <iostream>
#include <string>
//
///*
//    int  age = 0;
//    std::string name = "";
//
//    int main() {
//        std::cout << "Pleas enter your age :";
//        std::cin >> age;
//        std::cout << "What is your full naME :";
//        std::cin.ignore();
//        std::getline(std::cin, name);
//
//        if (age >= 20) {
//            std::cout << "You are an adult";
//        }
//        if (age < 20) {
//            std::cout << "You are a teenager";
//        }
//
//        std::cout << "Your name is :" << name << " and you are " << age << " years old" << std::endl
//
//        return 0;
//    }
//    */


    int age;


    int main()
{
        std::cout << "What is your age: ";
        std::cin >> age;
        std::cout << "Your age is " << age << std::endl;

            if (age >= 20) {

                 std::cout << "You are an adult";
    }

            if (age < 20) {

                std::cout << "You are a teenager";
   } 
}
