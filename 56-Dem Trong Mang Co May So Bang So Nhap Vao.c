#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, k, i;
	scanf("%d", &n);
	int a[n];
	// Process and Print Output
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	int count = 0;
	for(i = 0; i < n; i++){
		if(a[i] == k){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
