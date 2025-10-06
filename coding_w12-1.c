#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;

    // ชี้ pointer ptr ไปที่ตัวแปร x
    ptr = &x;

    // แสดงค่าของ x ก่อนเปลี่ยน
    printf("Before: x = %d\n", x);

    // ใช้ pointer เปลี่ยนค่าของ x เป็น 20
    *ptr = 20;

    // แสดงค่าของ x หลังเปลี่ยน
    printf("After : x = %d\n", x);

    return 0;
}