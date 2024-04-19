#include <bits/stdc++.h>
#define MAX 100
using namespace std;
struct String {
    int n;
    char* str ;
    String(const char* s) {
        n = strlen(s);
        str = new char[n+1];
        strcpy(str, s);
    }
    ~String() {
        delete[] str;
    }
    void print() {
        cout << str << endl;
    }
    void append(const char* a) {
        int new_len = n+ strlen(a);
        char* temp = new char[new_len+1];
        strcpy(temp, str);
        strcat(temp, a);
        delete[] str;
        str = temp;
        n = new_len;
    }
};
int main() {
    String s("hello");
    s.append(" there");
    s.print();
}
