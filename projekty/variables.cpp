#include <iostream>

int main(){
    
    //integer
    int age = 21;
    int years = 2023;
    int days = 5;

    //double
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //character
    char grade = 'A';
    char initial = 'B';
    char curency = '$';

    //boolean
    bool student = true;
    bool teacher = false;
    bool forSale = true;

    //string
    std::string name = "Ivan";
    std::string day = "Friday";
    std::string food = "pizza";

    std::cout << age << '\n';
    std::cout << years << '\n';
    std::cout << days << '\n';
    std::cout << price << '\n';
    std::cout << grade << '\n';
    std::cout << forSale << '\n';
    std::cout << food << '\n';

    std::cout << "Hello " << name << " you are " << age << " years old." << '\n';

    return 0;
}