#include <iostream>

int main () {
    double x;
    int n;
    std :: cin >> x >> n ;

    double result = 1 ;
    for ( int i = 0; i<n ; i++) {
        result= result * x;

    }
    std:: cout << result << std :: endl ;
}