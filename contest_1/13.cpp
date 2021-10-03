#include <iostream>
#import <cmath>

using namespace std;

long long unsigned int nod(long long unsigned int a, long long unsigned int b){
    if (b == 0){return a;}

    else {return nod(b, a%b);}
}
long long unsigned int max(long long unsigned int a, long long unsigned int b){
    if (a>b){return a;}
    if (b>a){return b;}
    if (a==b) return a;
    return a;
}
long long unsigned int min(long long unsigned int a, long long unsigned int b){
    if (a>b){return b;}
    if (b>a){return a;}
    if (a==b) return a;
    return a;
}
long long unsigned int nok (long long unsigned int a, long long unsigned int b) {
    return ( (a / nod (a, b)) * b);
}

int main() {
    long long unsigned int a;
    long long unsigned int b;
    long long unsigned int c;
    cin>>a;
    cin >>b;
    cin >> c;
    long long unsigned int m;
    long long unsigned int n;
    m = nok(a,b);
    n = nok(max(m,c), min(m,c));
    cout<< n;

    return 0;
}