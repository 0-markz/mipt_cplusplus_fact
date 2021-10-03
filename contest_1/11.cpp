#include <iostream>

using namespace std;

int main() {
    int a;
    cin>>a;
    int c = a/2;
    int r = 1;
    for (int i = 0; i<a/2; i++){
        for (int j = 0; j<c; j++){cout<<' ';}
        for (int j = 0; j<r; j++){cout<<'+';}
        for (int j = 0; j<c; j++){cout<<' ';}
        r++;
        r++;
        c--;
        cout<<endl;
    }
    for (int i = 0; i< a; i++){cout<<'+';}
    cout<<endl;
    r--;
    r--;
    c++;
    for (int i = 0; i<a/2; i++){
        for (int j = 0; j<c; j++){cout<<' ';}
        for (int j = 0; j<r; j++){cout<<'+';}
        for (int j = 0; j<c; j++){cout<<' ';}
        r--;
        r--;
        c++;
        cout<<endl;
    }

    return 0;
}