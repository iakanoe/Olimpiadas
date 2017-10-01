#include <iostream>

int main(){
    long n, d, f, maxdc = 0, i=0; std::cin >> n >> d >> f;
    bool dias[d];
    //while(j < d) dias[j++] = 1;
    long maxf = 0;
    while(n--){
        long a; std::cin >> a;
        dias[a-1] = 1;
        if(a > maxf) maxf = a;
    }

    while(!(!(i <= d-f) || !(i < d-maxdc) || !(i <= maxf))){
        long dc = 0, fs = 0, i2 = i++;
        while(fs <= f){
            if(dias[i2++]) fs++;
            dc++;        }
        if(--dc > maxdc) maxdc = dc;
    }
    std::cout << maxdc;
    return 0;
}
