#include <iostream>

using namespace std;

int main() {
    unsigned int a;
    cin>>a;
    if (a == 0){cout<<0; return 0;}
    int c1 = 0;
    int c2 = 0;
    while(a >0){
        if(a%2 == 1){c1++;}
        if(a%2 == 0){c2++;}
        a = a/2;
    }
    for(int i = 0; i <c1; i++){
        cout<<'1';
    }
    for(int i = 0; i < c2; i++){
        cout<<'0';
    }

    return 0;
}