#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
    Point(int _x, int _y) {
        x=_x;
        y=_y;
    }
};
struct Rect {
    int x, y, w, h;

    bool contains(const Point& p) const {
        return p.x>=x && p.x<=x+w && p.y>=y && p.y<=y+h;
    }
};
struct Ship {
    Rect r;
    string id;
    int dx;
    int dy;
    void move() {
        r.x+=dx;
        r.y+=dy;
    }

};
void display(const Ship& ship) {
    cout << ship.r.x << " " << ship.r.y << endl ;
    cout << ship.id << endl;
}
int main() {
    Ship ship1;
    ship1.r = {10,20,10,20};
    ship1.id = "titanic";
    ship1.dx = 5;
    ship1.dy = -3;

    Ship ship2;
    ship2.r = {5, 10, 10, 20};
    ship2.id = "dewwo";
    ship2.dx = 8;
    ship2.dy = -4;

    int loop = 0;
    while (loop < 10) {
        ship1.move(); ship2.move();
        display(ship1); display(ship2);
        loop++;
    }

}

