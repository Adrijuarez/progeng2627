#include <iostream>

int main () {
    int n;
    std:: cin >> n;
    
    for(int r = 1; r <= n; r++){
    for(int c = 1; c <= n; c++){
        std::cout << r * c << "\t";   // \t = tab, keeps columns lined up
    }
    std::cout << std::endl;
}
}