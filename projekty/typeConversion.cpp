#include <iostream>

main(){

    double x = (int) 3.14;

    //char y = 100;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << "%" << '\n';
    
    std::cout << (char) 100 <<'\n';


    std::cout << x <<'\n';


    return 0;
}