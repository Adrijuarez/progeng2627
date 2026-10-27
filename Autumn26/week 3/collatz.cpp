#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int steps = 0;
    int maxnum = n;

    while(n != 1){                  // while: we don't know how many steps
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        std::cout << n << " ";
        steps++;
        if(n > maxnum){ maxnum = n; }   // same "max so far" idea
    }
    std::cout << std::endl;
    std::cout << "steps: " << steps << std::endl;
    std::cout << "max: " << maxnum << std::endl;
}