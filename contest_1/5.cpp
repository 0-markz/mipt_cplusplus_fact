#include <iostream>

int main() {
    int a;
    int b;
    std::cin>>a>>b;
    for (int i =0; i<a; i++){
        for (int j = 0; j<b; j++){
            if((i*j==0) or(i==a-1)or(j==b-1)){
                std::cout<<'+';
            }
            else
            {std::cout<<" ";}
        }
        std::cout<<std::endl;
    }
    return 0;
}