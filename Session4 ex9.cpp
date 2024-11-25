#include <stdio.h>

int main(int argc, const char * argv[]){
	   // B1:
    int day;
    int month;
    int year;

    // B2:
    printf("Moi ban nhap vao ngay: \n");
    scanf("%d", &day);
    printf("Moi ban nhap vao thang: \n");
    scanf("%d", &month);
    printf("Moi ban nhap vao nam: \n");
    scanf("%d", &year);

    // B3:
    if(year <= 0) {
        printf("Nam nhap vao khong hop le !\n");
    } else {
        // B4: Kiem tra xem nam co phai nam nhuan hay khong????
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            // B5:
            if (month >= 1 && month <= 12) {
                // B6:
                /*
                if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {

                }
                */
                switch (month) {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        if(day >= 1 && day <= 31){
                            printf("Ngay thang nam day du la %d/%d/%d", day, month, year);
                        } else {
                            printf("Ngay nhap vao khong hop le");
                        }
                        break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        if(day >= 1 && day <= 30){
                            printf("Ngay thang nam day du la %d/%d/%d", day, month, year);
                        } else {
                            printf("Ngay nhap vao khong hop le");
                        }
                        break;
                    case 2:
                        if(day >= 1 && day <= 29){
                            printf("Ngay thang nam day du la %d/%d/%d", day, month, year);
                        } else {
                            printf("Ngay nhap vao khong hop le");
                        }
                        break;

                    default:
                        break;
                }
            } else {
                printf("Thang nhap vao khong hop le");
            }
        } else {
            // B5:
            if (month >= 1 && month <= 12) {
                // B6:
                /*
                if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {

                }
                */
                switch (month) {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        if(day >= 1 && day <= 31){
                            printf("Ngay thang nam day du la %d/%d/%d", day, month, year);
                        } else {
                            printf("Ngay nhap vao khong hop le");
                        }
                        break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        if(day >= 1 && day <= 30){
                            printf("Ngay thang nam day du la %d/%d/%d", day, month, year);
                        } else {
                            printf("Ngay nhap vao khong hop le");
                        }
                        break;
                    case 2:
                        if(day >= 1 && day <= 28){
                            printf("Ngay thang nam day du la %d/%d/%d", day, month, year);
                        } else {
                            printf("Ngay nhap vao khong hop le");
                        }
                        break;

                    default:
                        break;
                }
            } else {
                printf("Thang nhap vao khong hop le");
            }
        }
    }
    return 0;
}
