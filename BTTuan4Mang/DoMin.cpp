#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >>n;
    char a[m+2][n+2]={'.'};
    for(int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=1; i<= m; i++) {
        for (int j=1; j<=n; j++) {
            int dem=0;
            if (a[i][j]!='*') {
                if (a[i-1][j-1]=='*') dem++;
                if (a[i-1][j]=='*') dem++;
                if (a[i-1][j+1]=='*') dem++;
                if (a[i][j+1]=='*') dem++;
                if (a[i+1][j+1]=='*') dem++;
                if (a[i+1][j]=='*') dem++;
                if (a[i+1][j-1]=='*') dem++;
                if (a[i][j-1]=='*') dem++;
                a[i][j]= (char) dem+48;
            }

        }
    }
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
