#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
    printPoint() {
        cout << x << " " << y << endl;
    }
};
void print(Point &p) {
    cout << p.x <<" " << p.y << endl;
}
int main() {
    Point point;
    point.x = 10;
    point.y = 20;
    print(point);
    point.printPoint();
}

