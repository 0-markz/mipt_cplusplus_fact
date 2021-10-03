#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string a;
    std::cin >> a;
    std::cout << count(a.begin(), a.end(), '1') << std::endl;
    return 0;
}