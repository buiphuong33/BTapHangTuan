#include <bits/stdc++.h>
using namespace std;
int main() {
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // giải phóng bộ nhớ không được cấp phát bởi new
    // con trỏ c chỉ là một con trỏ trỏ đến một phần của mảng đã được cấp phát bởi new
    // khi gọi delete c chương trình sẽ cố gắng giải phóng bộ nhớ tại địa chỉ được chỉ định bới c dẫn đến lỗi
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
