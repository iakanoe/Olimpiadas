#include <iostream>

using namespace std;

#define fand(a,b) !((!(a)) || (!(b)))

int main(){
    long n, d, f, j = 0, maxdc = 0; cin >> n >> d >> f;
    bool dias[d];
    while(j < d) dias[j++] = 1;
    long maxf = 0;
    while(n--){
        long a; cin >> a;
        dias[a-1] = 0;
        if(a > maxf) maxf = a;
    }



    for(long i = 0; !(!(i <= d-f) || !(i < d-maxdc) || !(i <= maxf)); i++){
    //for(long i = 0; i <= (d-f) && i < d-maxdc && i <= maxf; i++){
        long dc = 0, fs = 0, i2 = i;
        if(dias[i] == 0)
        while(fs <= f){
            if(dias[i2++]) fs++;
            dc++;        }
        if(--dc > maxdc) maxdc = dc; // maxdc = max(--dc, maxdc);
    }
    cout << maxdc;
    return 0;
}
