#include <iostream>

int main(){

    int students = 6 - (5 + 4) * 3 / 2;

    //students = students + 1;
    //students += 1 ;
    //students++;

    //students = students - 1;
    //students -= 1 ;
    //students--;

    //students = students * 2;
    //students *= 2 ;

    //students = students / 2;
    int remainder = students % 3;
    students /= 3 ;

    std::cout << students << '\n';
    std::cout << remainder << '\n';

    return 0;
}