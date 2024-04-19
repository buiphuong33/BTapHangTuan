#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};
void print(Point p) {
    cout << p.x << p.y;
}
Point mid_point(const Point &a, const Point &b) {
        Point m;
        m.x = (a.x+b.x)/2;
        m.y = (a.y+b.y)/2;
        return m;
}
int main() {
    Point point;
    point.x = 10;
    point.y = 20;
    print(point);
}
