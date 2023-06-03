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
	printf("%d", a[0] + a[n-1]);
	return 0;
}
