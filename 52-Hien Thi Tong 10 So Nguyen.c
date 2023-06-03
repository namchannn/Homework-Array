#include <stdio.h>
// int main() function
int main(){
	// Input
	int a[10];
	int i = 0;
	int sum = 0;
	for(i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 10; i++){
		sum += a[i];
	}
	printf("%d", sum);
	return 0;
}
