#include <iostream>

using namespace std;

int main(){
    long n, d, f; cin >> n >> d >> f;
    bool dias[d];
    while(n--){
        long a; cin >> a;
        dias[a - 1] = 1;
    }



    long maxdc = 0;
    for(long i = 0; i < d; i++){
        long dc = 0, fs = 0, i2 = i;
        while(fs <= f){
            if(dias[i2++] == 0) fs++;
            dc++;        }
        maxdc = max(dc, maxdc);
    }
    cout << --maxdc;
}
