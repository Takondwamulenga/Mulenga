#include <iostream>
using namespace std;
int main(){
    int *dynamicint = new int;
    std::string *dynamicstring = new std::string;

    std::cout<<"Enter an integer value: ";
    std::cin>>*dynamicint;

    std::cout<<"Enter a string value: ";
    std::cin>>*dynamicstring;

    std::cout<<"dynamically allocated integer value: "<<*dynamicint<<std::endl;
    std::cout<<"dynamically allocated string value: "<<*dynamicstring<<std::endl;
    
    delete dynamicint;
    delete dynamicstring;
    return 0;

}
