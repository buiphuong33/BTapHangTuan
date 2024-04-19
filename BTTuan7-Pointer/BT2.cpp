// Mảng truyền vào hàm dạng con trỏ
#include <bits/stdc++.h>
using namespace std;
void f(int* a) {
    cout << sizeof(a)/sizeof(int) << endl;
}
int main() {
    int a[] = {1,2,3,4,5};
    f(a);
    cout << sizeof(a)/sizeof(int) << endl;;
}
