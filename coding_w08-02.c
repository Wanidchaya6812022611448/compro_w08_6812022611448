#include <stdio.h>
int main () {
    int start_number, stop_number; 
    // ประกาศตัวแปร start_number และ stop_number
    printf("Enter start number: "); 
    scanf("%d", &start_number);
    // ใส่ค่า start_number
    printf("Enter stop number: "); 
    scanf("%d", &stop_number);
    // ใส่ค่า stop_number

    printf("Start number is %d and stop number is %d\n", start_number, stop_number); 
    // แสดงข้อความของค่่าเริ่มต้นและค่าสิ้นสุด
    printf("\n--------------------------\n");
    printf("Sequence from start to stop: ");

    while (start_number<=stop_number) { 
        // ระบุให้ while ทำงานจนกว่า start_number จะมากกว่า stop_number
        printf("%d ", start_number); 
        // แสดงค่าของ start_number จนกว่าจะถึงค่า stop_number ที่ผู้ใช้กำหนดไว้
        start_number++; 
        //  start_number จะเพิ่มทีละ 1
    }
    printf("\nThank you.\n"); 
    // แสดงข้อความขอบคุณ
    return 0;
}