#include <iostream>

using namespace std;

int main() {
    char a;
    cin>>a;
    int c = 0;
    while (a != '@'){
        if ( ( (int) a >= 48 )  && ( (int) a <= 57) ){
            c++;
        }
        cin>>a;
    }
    cout<<c;
    return 0;
}