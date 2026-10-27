#include <iostream>

int main(){

    int n, d;
    int counter=0 ;

    std:: cin >> n >> d;

    while (n>=d) {
        n=n-d ;
     counter = counter + 1 ;
    }
std :: cout << counter << " remainder " << n ;

}