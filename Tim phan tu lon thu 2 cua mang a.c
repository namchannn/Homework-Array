#include <stdio.h>
int main(){
	// Tim phan tu lon thu 2 cua mang a[5] = {4,3,0,9}
	// Giai thuat:
	/*
		1. Khai bao va gan gia tri cho mang "a"
		2. Khai bao bien "loop" va 2 bien "largest1" va "lasgest2" de luu gia tri
		3. Lap trong moi phan tu cua mang "a" de lay gia tri
		4. Neu a[loop] > largest1 && largest1 > largest2 thi largest1 = a[loop]
		3. Hien thi ket qua sau khi vong lap ket thuc
	*/
	int a[5] = {4,3,0,9};
	int loop, largest1, largest2;
	largest1 = a[0];
	largest2 = a[0];
	for(loop = 1; loop < 5; loop++){
		if(a[loop] > largest1 && largest1 > largest2){
			largest1 = a[loop];
		}
	}
	printf("Phan tu lon thu 2 trong mang a la: %d", largest2);
	return 0;
}
