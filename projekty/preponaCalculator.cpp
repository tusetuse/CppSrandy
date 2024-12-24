#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter side A in cm: ";
    std::cin >> a;

    std::cout << "Entert side B in cm: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "Side C is: " << c << " cm.";

    return 0;
}