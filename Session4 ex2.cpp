#include <stdio.h>

int main() {
    int number;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n
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
