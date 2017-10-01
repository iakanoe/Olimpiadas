#include <iostream>

using namespace std;

int main(){
    long n, d, f, j=0; cin >> n >> d >> f;
    bool dias[d];
    while(j < d) dias[j++] = 1;
    long maxdc = 0;
    while(n--){
        long a; cin >> a; dias[a-1] = 0;
        long dc = 0, fs = 0, a2 = a;
        while(fs <= f){
            if(dias[a2++]) fs++;
            dc++;        }
        maxdc = max(--dc, maxdc);
    }
    cout << maxdc;
    return 0;
}
