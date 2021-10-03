#include <iostream>
#define b 32
union flint
{float f; unsigned int inn;
};

float power(float n, int d)
{


    int i;
    float rez = 1;
    for (int i=0; i <d; i++)
    {
        rez = rez*n;
    }
    return rez;
}
int main()
{
    std::cout << std::fixed;
    std::cout.precision(2);
    flint n;
    int i;
    float temp;
    float deg = 10;
    for (i = 0; i < 50; i++)
    {
        temp = power(deg, i);
        n.f = temp;
        int t;
        int j;
        std::cout<<" "<< temp<<" ";
        for(int j = b-1; j>=0; j--)
        {
            t = n.inn & 1;
            //std::cout << temp<<std::endl;
            n.inn>>=1;
            std::cout <<t;
        }
        std::cout<<std::endl;
    }

    return 0;
}
