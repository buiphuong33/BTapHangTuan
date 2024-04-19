#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b) {
    if (a<b) {
        int temp=a;
        a=b;
        b=temp;
    }
    if(b==0) return a;
    return ucln(b, (a%b));

}
int main() {
    int a, b;
    cin >>a >> b;
    if (ucln(a,b)==1) cout << "so nguyen to cung nhau";
    else cout << "khong phai so nguyen to cung nhau";
}

