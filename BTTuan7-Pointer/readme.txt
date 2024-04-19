# Bài tập phần B
1.Cho đoạn lệnh sau.
char c = ‘A', d = ‘B';
char* p1 = &c;
char* p2 = &d;
char* p3;
Giả sử địa chỉ của c là 0x1234, địa chỉ của d là 0x5678. Hỏi output của đoạn lệnh sau là gì?
p3 = &d;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
p3 = p1;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
*p1 = *p2;
cout << “*p1 = “ << *p1 << “, p1 = “ << p1 << endl;

Bài làm
p3 = &d;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
output của lệnh này là *p3 = B, p3 = 0x5678

p3 = p1;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
output của lệnh này là *p3 = A, p3 = 0x1234

*p1 = *p2;
cout << “*p1 = “ << *p1 << “, p1 = “ << p1 << endl;
output của đoạn lệnh này là *p1 = B, p1 = 0x1234

2.Cho các lệnh sau.
int *p;
int i;
int k;
i = 4;
k = i;
p = &i;
(Những) lệnh nào trong số các lệnh dưới đây sẽ gán cho i giá trị 5?
k = 5;
*k = 5;
p = 5;
*p = 5;

Bài làm
Chỉ có lệnh *p=5 là gán cho i bằng 5 vì p là con trỏ kiểu int trỏ đến địa chỉ của biến i, nên nó có thể sửa giá trị của i

3.Giải thích lỗi sau:
char c = ‘C';
double *p = &c;

Bài làm
biến c được khai báo kiểu dữ liệu là char nhưng con trỏ trỏ tới c lại có kiểu double, do đó khi cố gán địa chỉ của biến c cho con trỏ p sẽ xảy ra lỗi kiểu dữ liệu không phù hợp. Cần sửa lại như sau
char c = 'C';
char *p = &c;

 
