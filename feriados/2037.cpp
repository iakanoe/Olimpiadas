#include <iostream>

using namespace std;

int main(){
    long n, d, f; cin >> n >> d >> f;
    bool dias[d];
    for(long j = 0; j < d; j++) dias[j] = 1;
    while(n--){
        long a; cin >> a;
        dias[a - 1] = 0;
    }



    long maxdc = 0;
    for(long i = 0; i < d; i++){
        long dc = 0, fs = 0, i2 = i;
        while(fs <= f){
            if(dias[i2++]) fs++;
            dc++;        }
        maxdc = max(dc, maxdc);
    }
    cout << --maxdc;
}
