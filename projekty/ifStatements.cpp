#include <iostream>

int main(){


    int age;
    bool enter;

    std::cout << "Enter ur age: ";
    std::cin >> age;

    if(age >= 18 && age < 100){
        enter = true;
        std::cout << enter;
    }else if(age < 0 || age >= 100){
        std::cout << "Chod dopici kokotko.";
    }else{
        enter = false;
        std::cout << enter;
    }


    return 0;
}