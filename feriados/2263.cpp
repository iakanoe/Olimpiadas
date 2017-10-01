#include <iostream>

using namespace std;

int main(){
    long n, d, f, j, maxdc; cin >> n >> d >> f;
    bool dias[d];
    while(j < d) dias[j++] = 1;
    long maxf = 0, minf = d;
    while(n--){
        long a, dc = 0, fs = 0; cin >> a;
        while(fs <= f){
            if(dias[a++]) fs++;
            dc++;        }
        maxdc = max(--dc, maxdc);
    }
    cout << maxdc;
    return 0;
}
