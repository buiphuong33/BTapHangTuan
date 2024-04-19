//ceil LAM TRON LEN
//floor LAM TRON XUONG

#include <bits/stdc++.h>
using namespace std;
int rnd1(double a) {
    int roundUp = ceil(a);
    int roundDown = floor(a);
    if (roundUp - a > a-roundDown) return roundDown;
    return roundUp;
}
int rnd2 (double a) {
    int duXuong = a-(int)a;
    int duLen = (int)a+1-a;
    if(duLen< duXuong) return (int)a;
    return (int)a+1;
}
int main() {
    double a;
    cin >> a;
    cout << rnd1(a) << endl;
    cout << rnd2(a) << endl;
    cout << (int)a+1-a;
}

