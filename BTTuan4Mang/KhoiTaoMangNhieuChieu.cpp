//a.Với mỗi cách, in mảng thành dạng bảng 2 dòng 12 cột để xem hiệu quả khởi tạo.
//b.Với mỗi cách trên, hãy thử chỉ khởi tạo một phần của mảng bằng cách xóa bớt các giá trị khởi tạo xem kết quả như thế nào
//c.Với mỗi cách ban đầu, hãy thử bỏ giá trị kích thước (số dòng / số cột / cả hai) trong khai báo mảng
//(tương tự tại khai báo int a[ ] = {1, 2, 3, 4} ) xem kết quả như thế nào



#include <bits/stdc++.h>
using namespace std;
int main() {
    char daytab1[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
    char daytab2[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    for (int i=0; i<2; i++) {
        for (int j=0; j<12; j++) {
            cout << daytab1[i][j] << " ";
        }
        cout << endl;
    }
     for (int i=0; i<2; i++) {
        for (int j=0; j<12; j++) {
            cout << daytab2[i][j] << " ";
        }
        cout << endl;
    }

cout << "hello";
}
