#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;
using pairlist_t = std::vector<std::pair<std::string, int>>;


int main(){

    text_t firstName = "Ivan";
    number_t age = 23;

    pairlist_t pairlist;

    std::cout << firstName <<'\n';
    std::cout << age <<'\n';

    return 0; 
}