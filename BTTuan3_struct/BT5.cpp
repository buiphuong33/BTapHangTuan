#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
    printPoint() {
        cout << x << " " << y << endl;
    }
};
struct Rect {
    double x, y, w, h;
    bool contains(const Point p) {
        return p.x>=x && p.x<=x+w && p.y>=y && p.y<=y+h;
    }
};
int main() {
    Point p;
    cout << "nhap toa do x y cua diem p: " << endl;
    cin >> p.x >> p.y;
    Rect r;
    cout << "nhap toa do x y va chieu rong w chieu dai h cua hcn: " << endl;
    cin >> r.x >> r.y >> r.w >> r.h;
    if(r.contains(p)) cout << "yes";
    else cout << "no";
}
