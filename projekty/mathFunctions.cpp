#include <iostream>
#include <cmath>

int main(){

    double x = 3.14;
    double y = 4;
    double z;

    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(2, 3);
    //z = sqrt(9);
    //z = abs(-9);//vzdialenost od nuly
    //z = round(x);
    //z = ceil(x);//zaokruhly hore
    z = floor(x);//zaokruhly dole


    std::cout << z;


    return 0;
}