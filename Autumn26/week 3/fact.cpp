#include <iostream>

int main(){
    int n;
    std::cin >> n;

    long long fact = 1;
    for(int i = 1; i <= n; i++){   // multiply 1×2×3×...×n
        fact = fact * i;
    }
    std::cout << fact << std::endl;
}