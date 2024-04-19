//hàm xử lý xâu
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char* str1 = new char[100];
    char* str2 = new char[100];
    cin >> str1 >> str2;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int count = 0;
    for (int i=0; i<=len2-len1; ++i) {
        if(strncmp(str1, str2+i, len1)==0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


