#include <iostream>

using namespace std;

int main(){
    long n, d, f; cin >> n >> d >> f;
    bool dias[d];
    for(long j = 0; j < d; j++) dias[j] = 1;
    long min1 = d;
    while(n--){
        long a; cin >> a;
        min1 = min(a, min1);
        dias[a--] = 0;
    }


    long maxdc = 0;
    long i = --min1;
    while(i++ < (d-f)){
        long dc = 0, fs = 0, i2 = i;
        while(fs <= f){
            if(dias[i2++]){
                fs++;
            }
            dc++;        }
        maxdc = max(--dc, maxdc);
        if(i >= d-maxdc) break;
    }
    cout << maxdc;
}
