#include <stdio.h>
int main(){
	// Tim phan tu nho nhat cua mang a[5] = {4,3,1,0,9}
	// Giai thuat:
	/*
		1. Khai bao va gan gia tri cho mang "a"
		2. Khai bao bien "loop" va 1 bien "smallest" de luu gia tri
		3. Lap trong moi phan tu cua mang "a" de lay gia tri
		4. Neu a[loop] < smallest thi smallest = a[loop]
		5. Hien thi ket qua sau khi vong lap ket thuc
	*/
	int a[5] = {4,3,1,0,9};
	int loop, smallest;
	smallest = a[0];
	for(loop = 1; loop < 5; loop++){
		if(a[loop] < smallest){
			smallest = a[loop];
		}
	}
	printf("Phan tu nho nhat cua mang a la: %d", smallest);
	return 0;
}
