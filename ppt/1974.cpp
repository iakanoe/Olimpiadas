#include <iostream>

using namespace std;

string mmm[] = {"Ana", "Bartolo", "Empate"};

int main(){
    int r;
    string a, b; cin >> a >> b;
    if(a == "Piedra"){
        if(b == "Tijera") r = 0;
        else if(b == "Papel") r = 1;
        else r = 2;
    } else if(a == "Papel") {
        if(b == "Tijera") r = 1;
        else if(b == "Piedra") r = 0;
        else r = 2;
    } else {
        if(b == "Tijera") r = 2;
        else if(b == "Papel") r = 0;
        else r = 1;
    }
    cout << mmm[r];
}
