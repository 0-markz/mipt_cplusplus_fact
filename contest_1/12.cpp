#include <iostream>
#define b 32
int bin[b] = {0};
int main() {
    int i;
    int temp;
    int n;
    std::cin>>n;
    int norig = n;
    for(i = b-1; i>=0; i--)
    {
        temp = n & 1;
        n>>=1;
        bin[i] = temp;
    }
    int check = 0;
    for( i = 0; i<b; i++)
    {
        if(bin[i] == 0 && check ==1)
        {   std::cout<<bin[i];}
        if(bin[i] ==1 && check ==0)
        {   check = 1;}
        if(bin[i] == 1){
            std::cout << bin[i];}
    }
    if (norig ==0) std::cout <<0;
    return 0;
}