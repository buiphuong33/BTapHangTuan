// chuyen doi tu he co so 10 sang he co so 2
#include<iostream>
#include <vector>
using namespace std;
void tenToTwo(int n) {
    vector <int> a;
    do {
        int du = n%2;
        a.push_back(du);
        n = n/2;
    }while(n>0);
    for (int i=a.size()-1; i>=0; i--) {
        cout << a[i];
    }
}
int main() {
    int n;
    cin >> n;
    tenToTwo(n);
}
