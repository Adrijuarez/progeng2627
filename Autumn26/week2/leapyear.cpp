#include <iostream>

int main(){
    int year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> year;

    if( (year % 4) == 0 ){
        // multiple of 4 so far...
        if( (year % 100) == 0 ){
            // also a multiple of 100 — need one more check
            if( (year % 400) == 0 ){
                std::cout << "leap year" << std::endl;
            }
            else{
                std::cout << "not a leap year" << std::endl;
            }
        }
        else{
            // multiple of 4 but not of 100 → definitely leap
            std::cout << "leap year" << std::endl;
        }
    }
    else{
        // not even a multiple of 4
        std::cout << "not a leap year" << std::endl;
    }
}