#include <bits/stdc++.h>
using namespace std;
long long Power(int &x, int &y) {
    long long xmuy=1;
    for (int i=1; i<=y; i++){
        xmuy*=x;
    }
    return xmuy;
}
int main() {
    int a, b;
    cin >> a >>b;
    cout << Power(a, b) << endl;
    return 0;
}
