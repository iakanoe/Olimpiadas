#include <iostream>

using namespace std;

int main(){
    long n, d, f; cin >> n >> d >> f;
    bool dias[d];
    long feriados[n];
    for(long j = 0; j < d; j++) dias[j] = 1;
    long maxf = 0;
    long jjj = 0;
    long n2 = n;
    while(n2--){
        long a; cin >> a;
        feriados[jjj++] = a-1;
        dias[a-1] = 0;
        //maxf = max(a, maxf);
    }



    long maxdc = 0;
    for(long a: feriados){
        long dc = 0, fs = 0;//, i2 = feriados[i];
        if(dias[a-1]){
            while(fs <= f){
                if(dias[a++]) fs++;
                dc++;            }
            maxdc = max(--dc, maxdc);
        }
    }


    /*for(long i = 0; i <= (d-f) && i < d-maxdc && i <= maxf; i++){
        long dc = 0, fs = 0, i2 = i;
        while(fs <= f){
            if(dias[i2++]) fs++;
            dc++;        }
        maxdc = max(--dc, maxdc);
    }*/
    cout << maxdc;
    return 0;
}
