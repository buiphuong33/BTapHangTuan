#include <iostream>
using namespace std;
int factorial(int n) {
    cout << "n = " << n << " at " << &n << endl;
    if (n==0) return 1;
    return n* factorial(n-1);

}
int main() {
    int x;
    cin >> x;
    cout << factorial(x) << endl;
    //cout << "x = " << x << " at " << &x << endl;
    return 0;
}
