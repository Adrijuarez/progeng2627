#include <iostream>

int main () {
    int n;
    std:: cin >> n ;

    for(int c2 = 0; c2 < n; c2++){        // outer loop: once per row
    for(int c = 0; c < n; c++){       // inner loop: once per star
        std::cout << "*";
    }
    std::cout << std::endl;           // new line AFTER each row
}
}