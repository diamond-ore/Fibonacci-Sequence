#include <iostream>

int main() {
    int a = 0, b = 1;
    for (int i = 1; i<15; i++) {
        std::cout << std::to_string(a)+"\n";
        b += a;
        a = b - a;
    }
    return 0;
}