#include <iostream>

int main() {
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;
    int i = 1; 
    while(i <= N) {
        std::cout << i << std::endl;
        i++;
    }

    return 0;
}