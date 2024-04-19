#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int n) {
    if (n<2) return 0;
    for (int i=2; i<n; i++) {
        if(n%i==0) return 0;
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    for (int j=2; j<n; j++) {
        if (IsPrime(j)) cout << j << " ";
    }
}


