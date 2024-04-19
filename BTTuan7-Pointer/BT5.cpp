//dangling references
#include <bits/stdc++.h>
using namespace std;
char* weird_string() {
    char c[] = "12345";
    return c;
}
int main() {
    cout << weird_string();
}
// biến c trong hàm weird_string() là 1 mảng cục bộ
//nghĩa là nó chỉ tồn tại trong phạm vi của hàm weird_string()
//khi hàm kết thúc, biến c được giải phóng và không còn nữa
