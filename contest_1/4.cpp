#include <iostream>

int main() {
    int a;
    int b;
    std::cin>>a;
    int temp;
    b = -1;
    for (int i=0; i<a; i++){
        std::cin>>temp;
        if (abs(temp)>abs(b)){
            b=temp;

        }
    }
    std::cout<<b;
    return 0;
}