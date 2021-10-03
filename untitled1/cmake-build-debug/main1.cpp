#include <iostream>
#define b 32
int bin[b] = {0};
union flint
        {float f; unsigned int inn;
};
int main() {
    flint n;


    std::cin>> n.f;
    int i;
    int temp;
    for(int i = b-1; i>=0; i--)
    {
        temp = n.inn & 1;
        //std::cout << temp<<std::endl;
        n.inn>>=1;
        bin[i] = temp;
    }
    for(int i = 0; i<b; i++)
    {
        std::cout << bin[i];
    }
    return 0;
}
