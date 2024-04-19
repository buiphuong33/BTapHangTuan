#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n<10) cout << n;
    int sum=0;
    while(n>0) {
        int du= n%10;
        sum+=du;
        n=n/10;
    }
    cout << sum;
}

