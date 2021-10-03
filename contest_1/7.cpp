#include <iostream>



int main() {
    int a;
    std::cin>>a;
    for(int i = 1; i<=a; i++){
        if (a%i==0){
            if(a!=i){
                std::cout<<i<<" ";}
            else{
                std::cout<<i<<std::endl;
            }
        }
    }
    return 0;
}