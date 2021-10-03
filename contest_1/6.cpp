#include <iostream>

long long unsigned int fact(long long unsigned int a){
    if (a==1){
        return 1;
    }
    else{
        return (fact(a-1)*a);
    }
}

int main() {
    long long unsigned int a;
    std::cin>>a;
    std::cout<<fact(a)<<std::endl;
    return 0;
}