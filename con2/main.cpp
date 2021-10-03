#include <iostream>
using namespace std;

unsigned int sum_of_numbers(unsigned long long int n);
unsigned long long int fibonacci(unsigned int n);

//----------------------------------------------------
unsigned long long int fibonacci(unsigned int n){
    if (n ==1) {return 0;}
    if (n==2){return 1;}
    unsigned int n1=0;
    unsigned int n2=1;
    unsigned int n3;
    for (unsigned int i = 2; i<n;i++){
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}
unsigned int sum_of_numbers(unsigned long long int n)
{
    unsigned int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    unsigned int n;
    cin >>n;
    cout <<sum_of_numbers(fibonacci(n)) <<endl;
    return 0;
}
