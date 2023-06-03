#include <stdio.h>
// int main() function
int main(){
	// Input
	int n;
	scanf("%d", &n);
	int a[n], i;
	// Process and Print Output
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int maxValue = a[0];
	for(i = 0; i < n; i++){
		if(a[i] > maxValue){
			maxValue = a[i];
		}
	}
	printf("%d", maxValue);
	return 0;
}
