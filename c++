//Name:  Anjila Raya
//Email:  anjila.raya48@myhunter.cuny.edu
//Date:  May 9,2024
//whole number between -31 and 31 and prints out the number in "two's complement" notation.

#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "1";
        n = 32 + n;
    } else {
        std::cout << "0";
    }

    int b = 16;
    while (b > 0.5) {
        if (n >= b) {
            std::cout << "1";
            n %= b;
        } else {
            std::cout << "0";
        }
        b /= 2;
        std::cout << std::endl;
    }

    return 0;
}
