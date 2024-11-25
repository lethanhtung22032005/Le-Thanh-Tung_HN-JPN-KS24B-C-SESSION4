#include <stdio.h>

int main() {
    int number;

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    // Ki?m tra s? ch?n hay l?
    if (number % 2 == 0) {
        printf("So %d la so chan.\n", number);
    } else {
        printf("So %d la so le.\n", number);
    }

    return 0;
}
