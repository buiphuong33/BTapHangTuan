#include <bits/stdc++.h>
using namespace std;
int main() {
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p;
    *p2 = 100;
     cout << *p2; // p đã được giải phóng bộ nhớ bằng delete p,
      //mà p2 lại giữ địa chỉ của bộ nhớ đã được giải phóng dần đến lỗi không xác định
     delete p2; // trước đó đã giải phóng 1 lần rồi nên không cần giải phóng nữa

}
