#include <iostream>

using namespace std;

int main(){
    long n, d, f, j = 0, maxf = 0, i = 0, maxdc = 0;
    cin >> n >> d >> f;
    bool dias[d];
    while(j < d) dias[j++] = 1;
    while(n--){
        long a; cin >> a;
        dias[a-1] = 0;
        if(a > maxf) maxf = a;        //maxf = max(a, maxf);
    }


    //for(long i = 0; !(!(i <= d-f) || !(i < d-maxdc) || !(i <= maxf)); i++){
    //for(long i = 0; i <= (d-f) && i < d-maxdc && i <= maxf; i++){
    do {
        long dc = 0, fs = 0, i2 = i++;
        while(fs <= f){
            if(dias[i2++]) fs++;
            dc++;        }
        if(--dc > maxdc) maxdc = dc; // maxdc = max(--dc, maxdc);
    } while(!(!(i <= d-f) || !(i < d-maxdc) || !(i <= maxf)));
    cout << maxdc;
    return 0;
}
