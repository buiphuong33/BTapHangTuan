//1.Địa chỉ các biến. Hãy viết một chương trình có khai báo một mảng a kiểu int, mảng b kiểu
//char, in ra màn hình địa chỉ của 03 phần tử liên tiếp của mảng a, 03 phần tử liên tiếp của
//mảng b. Bạn có nhận xét gì về các kết quả đó? Viết câu trả lời vào chương trình ở dạng comment.
//Khai báo thêm một vài biến trước và sau các mảng trên. Hãy thử nghiệm để trả lời câu hỏi:
//các biến đó có vị trí tương đối với nhau như thế nào. Viết câu trả lời vào chương trình ở dạng comment.
#include <iostream>
using namespace std;
int main() {
    int a1 = 3;
    int a2 = 5;
    char a3 = 'd';
    int a[3]= {1,2,3};
    char b[3] = {'a', 'b', 'c'};
    int b1= 7;
    int b2 = 9;
    cout << &a1 << endl;
    cout << &a2 << endl;
    cout << (void*)&a3 << endl;

    for (int i=0; i<3; i++) {
        cout << &a[i] << endl;
    }
    // in ra dia chi cua cac phan tu trong mang a
    for (int i=0; i<3; i++) {
        cout << (void*)&b[i] << endl;
    }
    // in ra gia tri cua mang b
    cout << &b1 << endl;
    cout << &b2 << endl;
}
