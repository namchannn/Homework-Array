#include <stdio.h>
int main(){
	// Tinh gia tri TB cua mang a[5] = {4,3,1,0,9}
	// Giai thuat:
	/*
		1. Khai bao va gan gia tri cho mang "a"
		2. Khai bao bien "loop" va 2 bien "sum" va bien "average" de luu gia tri
		3. Lap trong moi phan tu cua mang "a" de lay gia tri
		4. Hien thi ket qua sau khi vong lap ket thuc
	*/
	int a[5] = {4,3,1,0,9};
	int loop;
	int sum = 0;
	for(loop = 0; loop < 5; loop++){
		sum += a[loop];
	}
	printf("Gia tri TB cua mang a la: %0.2f", (float)sum / 5);
	return 0;
}
