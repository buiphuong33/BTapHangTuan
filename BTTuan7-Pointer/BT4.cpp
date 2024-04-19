// tìm kiếm nhị phân
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int* a, int n, int x) {
    int* left = a;
    int* right = a+n;
    while(left<=right) {
        int mid = *left + (*right-*left)/2;
        if (x==a[mid]) return mid;
        else if(x<a[mid]) right = a+n-mid-1;
        else left = a+ mid+1;
    }
}
int main() {
    int a[] = {1, 2, 4, 6, 9, 10,11, 12, 13, 14};
    int n = sizeof(a)/sizeof(int);
    int x = 10;
    cout << binarySearch(a, n, x);
}
