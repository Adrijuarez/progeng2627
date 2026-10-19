#include <iostream>

int main(){
    double side1, side2, perimeter, area;

    std::cout << "enter the length of the first side" << std::endl;
    std::cin >> side1;
    std::cout << "enter the length of the second side" << std::endl;
    std::cin >> side2;

    perimeter = 2 * (side1 + side2);
    area = side1 * side2;

    std::cout << "perimeter = " << perimeter << std::endl;
    std::cout << "area = " << area << std::endl;
}