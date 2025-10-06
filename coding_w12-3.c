#include <stdio.h>

// ฟังก์ชันที่รับ pointer ของ array และขนาด แล้วคูณทุกค่าด้วย 2
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * 2;  // เข้าถึงค่าผ่าน pointer แล้วคูณ 2
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;

    // แสดงค่าก่อนคูณ
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // เรียกใช้ฟังก์ชัน doubleArray
    doubleArray(a, size);

    // แสดงค่าหลังคูณ
    printf("After : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}