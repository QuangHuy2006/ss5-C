#include <stdio.h>
int main(){
	int n,tong;
	printf("nhap so n:");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		tong+=i;
	}
	printf("%d", tong);
	return 0;
}
	