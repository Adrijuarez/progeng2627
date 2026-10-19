#include <iostream>
#include <string>

int main(){
    double temp_in, temp_out;
    std::string unit_in;

    std::cin >> temp_in >> unit_in;

    if( unit_in == "C" || unit_in == "c" ){
        temp_out = temp_in * 9.0 / 5.0 + 32;
        std::cout << temp_out << " F" << std::endl;
    }
    else if( unit_in == "F" || unit_in == "f" ){
        temp_out = (temp_in - 32) * 5.0 / 9.0;
        std::cout << temp_out << " C" << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}