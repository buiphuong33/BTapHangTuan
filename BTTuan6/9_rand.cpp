#include <bits/stdc++.h>
using namespace std;
int ran(int n) {
    int x= rand();
    while (x>=n) {
        x= rand();
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    cout << ran(n);
}

