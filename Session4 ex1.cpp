#include <stdio.h>
int main(){
	int number;
	printf("Moi ban Nhap so Nguyen: ");
	scanf("%d", number);
	if(number > 0){
		printf("So %d la so duong. \n", number);
	}else if(number < 0){
		printf("So %d la so am. \n");
	}else {
		printf("%d khong la so", number);
	}
	
