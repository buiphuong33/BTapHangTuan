#include <bits/stdc++.h>
using namespace std;
char* concat(const char* s1, const char* s2) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int n = n1+n2+1;
    char* s = new char[n];
    strcpy(s, s1);
    strcat(s, s2);
    return s;
}
int main() {
    const char* s1 = "Hello";
    const char* s2 = "World";
    cout << concat(s1, s2);
}
