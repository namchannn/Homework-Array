#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, i;	
	scanf("%d", &n);
	int a[n];
	// Process and Print Output
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		if(a[i] >= 0 && a[i] <= 10){
			printf("%d ", a[i]);
		}
	}
	return 0;
}
