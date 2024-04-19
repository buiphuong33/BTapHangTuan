#include <bits/stdc++.h>
using namespace std;
//Khai báo mảng trong và ngoài hàm main() và không khởi tạo giá trị cho mảng
//Khai báo và khởi tạo trong và ngoài hàm main() dạng int a[N] = {1, 2, 3, 4} với N lớn hơn và nhỏ hơn 4.
//Khai báo và khởi tạo trong và ngoài hàm main() dạng int a[ ] = {1, 2, 3, 4}.

int a[5];
// int b[3]={1, 2, 3, 4};
int b1[5]={1, 2,3,4};
int c[]={1,2,3,4};
int main() {
    int a1[5];
    int b2[9]={1,2,3,4};
     //int b3[3]={1,2,3,4};
     int c1[]={1,2,3,4};
    for (int i=0; i<5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i=0; i<5; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;
    for (int i=0; i<5; i++) {
        cout << b1[i] << " ";
    }
    cout << endl;
    for (int i=0; i<9; i++) {
        cout << b2[i] << " ";
    }
    cout << endl;
    for (int i=0; i< 4; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    for (int i=0; i<4; i++) {
        cout << c1[i] << " ";
    }
    cout << endl;
    return 0;
}
