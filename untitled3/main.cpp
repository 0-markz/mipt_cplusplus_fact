#include <iostream>
#define m 5000000
int main()
{
    int i;
    float temp=0;
    float temp2 = 1;
    while(temp != temp2)
    {
        //std::cout<<temp<<std::endl;
        temp++;
        temp2++;
    }
    std::cout<<temp;

    return 0;
}
