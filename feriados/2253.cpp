#include <iostream>

using namespace std;

int main(){
    long n, d, f, j=0; cin >> n >> d >> f;
    bool dias[d];
    while(j < d) dias[j++] = 1;
    long maxf = 0, minf = d;
    while(n--){
        long a; cin >> a;
        dias[a-1] = 0;
        if(a > maxf) maxf = a;        //maxf = max(a, maxf);
        if(a < minf) minf = a;
    }



    long maxdc = 0;
    for(long i = minf; !(!(i <= d-f) || !(i < d-maxdc) || !(i <= maxf)); i++){
    //for(long i = 0; i <= (d-f) && i < d-maxdc && i <= maxf; i++){
        long dc = 0, fs = 0, i2 = i;
        while(fs <= f){
            if(dias[i2++]) fs++;
            dc++;        }
        if(--dc > maxdc) maxdc = dc; // maxdc = max(--dc, maxdc);
    }
    cout << maxdc;
    return 0;
}
