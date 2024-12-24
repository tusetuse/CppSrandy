#include <iostream>

using namespace std;//ak napiseme toto netreba deklarovat std::cout alebo std::string atd.... ale je velka pravdepodobnost ze nastane naming konflikt

using std::cout; //toto je bezpecnejsie
using std::string;

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first;

    int x = 0;
    
    cout << second::x << '\n';
    std::cout << x << '\n';


    return 0;
}