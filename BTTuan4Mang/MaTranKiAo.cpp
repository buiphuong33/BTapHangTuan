#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            a[i][j]=0;
        }
    }
    int i=0;
    int j=n/2;
    for (int num=1; num<=n*n; num++) {
        a[i][j]=num;
        int next_i= (i-1+n)%n;
        int next_j= (j+1)%n;
        if (a[next_i][next_j]==0) {
            i=next_i;
            j=next_j;
        }
        else {
            i=(i+1)%n;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
