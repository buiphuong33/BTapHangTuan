#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=20, b=25, c=30;
    const int* pA = &a;
    int* const pB = &b;
    const int* const pC = &c;
    *pA+=1;// lỗi vì pA là hằng con trỏ nên ko thể thay đổi giá trị của địa chỉ mà nó trỏ tới
    *pB+=1; // đúng vì pB là con trỏ hằng nên có thể thay đôit giá trị
    *pC+=1; // sai vì pC chỉ có thể đọc không thể ghi
    pA = NULL: // đúng vì pA có thể thay đổi địa chỉ
    pB = NULL; // sai vì pB không thể thay đổi địa chỉ
    pC = NULL; // sai
}
