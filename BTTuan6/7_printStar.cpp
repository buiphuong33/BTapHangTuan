#include <bits/stdc++.h>
using namespace std;
void PrintStars(int m, int n) {
    for (int i=0; i<m; i++) cout << " ";
    for (int i=0; i<n; i++) cout << "*";
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    for (int j=1; j<=n; j++) {
        PrintStars (n-j,j*2-1);
    }
}
