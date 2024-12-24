#include <iostream>


int main(){


    std::string name;
    int age;

    std::cout << "Whats ur full name?: ";
    std::getline(std::cin >> std::ws, name); // std::cin berie len po prvu medzeru getline berie cely riadok, std::ws vymaze akekolvek newline charactery pouziva sa ak po std::cin funkcii nasleduje std::getline funkcia

    std::cout << "Whats ur age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << "." << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}