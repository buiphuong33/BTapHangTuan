#include <bits/stdc++.h>
using namespace std;
void Binary (string s, int n, int length) {
    if (n==length) {
        cout << s << endl;
        return;
    }
    Binary(s+'0', n-1, length);
    Binary(s+'1', n-1, length);
}
int main() {
    int n;
    cin >> n;
    string s ="";
    Binary(s, n, 0);
}

