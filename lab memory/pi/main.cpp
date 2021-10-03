#include <iostream>
#include <fstream>
#include <cmath>
#define m 1000000
float bin_pow (float a, int n) {
    float ans = 1;
    while (n != 0) {
        if (n & 1)
            ans *= a;
        a *= a;
        n >>= 1;
    }
    return ans;
}
float fact(long int n){
    if (n ==1) {return 1;}
    return (fact(n-1) * n);
}

float leybinc(long int i, float predl, bool zn){
    if (zn) {return ( predl + ( ( ( float) 1.0) / ( ((float) i )) ) ); }
    return ( predl - ( ( ( float) 1.0) / ( ((float) i )) ) );
}

float eyler ( long int i, float predey){
    return (predey + ((float) 1/(i*i)));
}

float arc_tg(float x, float predarctg, long int predi, bool zn){
    if (zn) {return (predarctg + (bin_pow(x, predi)) / (predi) );}
    return (predarctg - (bin_pow(x, predi)) / (predi) );
}
float viet(float predviet, float psqr){
    return ((predviet*2) / psqr) ;
}
float vallis(float predvallis, long int chi, long int nchi){
    return (predvallis* (((float) chi)/nchi));
}
float raman(float predsum, long int n){
    return predsum + (fact(4*n)*(1103+26390*n) / (bin_pow(fact(n), 4)* bin_pow(396, 4*n)));
}

int main() {

    std::ofstream out;
    out.open("/Users/markzaharzevskij/Documents/i/pi2.txt");
    out.precision(30);
    out << std::fixed;
    if (out.is_open()) {

        out << "iteration" << " " << "leybnicpi"<< " " << "eylerpi" << " " << "machinpi" << " " << "vietpi" << " " << "vallispi" << " " << "ramanpi" <<std::endl;

        int check =0;
        float ey;
        float l;
        float val;
        float vi;
        float ram_s;
        float mac_t1;
        float mac_t2;
        float mac;
        long int eyi;
        float visq;
        long int li;
        bool lz;
        bool ch;
        bool nch;
        long int ram_i;
        long int valich;
        long int valinch;
        long int arct;
        bool arcz;
        for(long int i =0; i<m; i++){
            if (!check){
                ey = 1;
                l = 1;
                lz = true;
                val =2;
                vi = (float) 2/sqrt(2);
                ram_s = (1103);
                mac_t1= ((float) 1) / ((float)5.0);
                mac_t2 = ((float) 1) / ((float) 239.0);
                mac = 4*mac_t1 - mac_t2;
                check =1;
                eyi = 1;
                li =1;
                valich=2;
                valinch=1;
                ch = false;
                nch = true;
                arcz = true;
                visq=sqrt(2);
                ram_i =0;
                arct = 1;
            }
            else{
                ey= eyler(eyi, ey);
                l = leybinc(li, l, lz);

                val = vallis(val, valich, valinch);
                vi = viet(vi, visq);
                ram_s = raman(ram_s, ram_i);

                mac_t1 = arc_tg( ((float) 1.0/(float)5.0),mac_t1, arct, arcz );
                mac_t2 = arc_tg( ((float) 1.0/(float)239.0),mac_t2, arct, arcz );


                mac = 4*mac_t1 - mac_t2;
            }
            out << i << " " << 4*l << " " << sqrt(6*ey) << " " << 4*mac << " " << 2*vi << " " << 2*val << " " << ((float) 1)/(( 2*sqrt(2) * ram_s) / 9801) <<std::endl;
            eyi++;
            arct+=2;
            li+=2;
            arcz = !arcz;
            visq = sqrt(2+visq);
            lz = !lz;
            if (ch) {valich+=2;}
            if (nch) {valinch+=2;}
            ch = !ch;
            nch = !nch;
            ram_i++;
        }
        out.close();
        return 0;
    }
}
