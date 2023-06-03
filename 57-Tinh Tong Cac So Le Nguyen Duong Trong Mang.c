#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, i;
	scanf("%d", &n);
	int a[n];
	int sum = 0;
	// Process and Print Output
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		if(a[i] % 2 != 0 && a[i] > 0){
			sum += a[i];
		}
	}
	printf("%d", sum);
	return 0;
}
