#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int a[n][m];
	// Process and Print Output
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int sum = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(a[i][j] % 5 == 0){
				sum += a[i][j];
			}
		}
	}
	printf("%d", sum);
	return 0;
}
