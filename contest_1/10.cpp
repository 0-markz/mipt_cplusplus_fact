#include <iostream>
#include <cmath>

using namespace std;

int prost(int a){
    int s = int(sqrt(a));
    int check = 0;
    if(a==1){ return 0;}
    if(a==2){return 1;}
    if (a==3){return 1;}
    for(int i = 2; i<= s+1; i++){
        if (a % i == 0){
            check = 1;
        }
    }
    if(check == 1){
        return 0;}
    else{
        return 1;
    }
}
int main() {
    int a;
    int p = 0;
    int c =0;
    std::cin >> a;
    while(c < a){
        p++;
        if (prost(p) == 1){
            c++;
        }
        if (c == a)
        {
            cout<<p<<endl;
        }
    }

    return 0;
}