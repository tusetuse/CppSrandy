#include <iostream>

int main(){

    int month;
    std::string mesiace[12] = {"januar", "februar", "marec", "april", "maj", "jun", "jul", "august", "september", "oktober", "november", "december"};
    std::cout << "Enter the month as a number(1-12): ";
    std::cin >> month;

    if(month > 12 || month < 1 ){
        std::cout << "Zec mi kok ty chudak.";
    }else{
        month--;
        std::cout << "Je " << mesiace[month] << ".";
    }
    
    return 0;
}