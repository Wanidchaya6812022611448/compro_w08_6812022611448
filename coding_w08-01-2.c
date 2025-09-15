#include <stdio.h>
int main () {

    for (int i=2;i<=10;i+=2) { 
    // ใน for ระบุให้ i เท่ากับ 2; ให้ for ทำงานในกรณีที่ i<=10; ให้ i เพิ่มค่าทีละ 2
        printf("%d ", i); 
        // แสดงค่า i ไปเรื่อยเรื่อยจนกว่า i จะมีค่าน้อยกว่าหรือเท่ากับสิบ
    }

    printf("\nEnd of loop\n"); 
    // แสดงข้อความจบ loop
    return 0;
}