#include <stdio.h>
int main(){
	// Tim phan tu lon nhat cua mang a[5] = {4,3,1,0,9}
	// Giai thuat:
	/*
		1. Khai bao va gan gia tri cho mang "a"
		2. Khai bao bien "loop" va 1 bien "largest" de luu gia tri
		3. Lap trong moi phan tu cua mang "a" de lay gia tri
		4. Neu a[loop] > largest thi largest = a[loop]
		5. Hien thi ket qua sau khi vong lap ket thuc
	*/
	int a[5] = {4,3,1,0,9};
	int loop, largest;
	largest = a[0];
	for(loop = 1; loop < 5; loop++){
		if(a[loop] > largest){
			largest = a[loop];
		}
	}
	printf("Phan tu lon nhat trong mang a la: %d", largest);
	return 0;
}
