#include <stdio.h>

// ฟังก์ชัน swap รับ pointer ของตัวแปร 2 ตัว และสลับค่ากัน
void swap(int *a, int *b) {
    int temp = *a;  // เก็บค่าที่ a ชี้อยู่ไว้ชั่วคราว
    *a = *b;        // นำค่าที่ b ชี้อยู่ใส่ให้ a
    *b = temp;      // นำค่าที่เก็บไว้ชั่วคราวใส่ให้ b
}

int main() {
    int a = 5, b = 10;

    // แสดงค่าก่อนสลับ
    printf("Before swap: a = %d b = %d\n", a, b);

    // เรียกใช้ฟังก์ชัน swap ส่ง address ของ a และ b เข้าไป
    swap(&a, &b);

    // แสดงค่าหลังสลับ
    printf("After swap : a = %d b = %d\n", a, b);

    return 0;
}