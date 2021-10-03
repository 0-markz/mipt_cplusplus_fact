#include <iostream>

int main() {
    std::cout.precision(30);
    std::cout << std::fixed;
    std::cout << (float)14485002/14485001 <<" "<<(float)16335002/16335001 << std::endl;
    return 0;
}
