#include <stdio.h>
int main(){
	int n,tich=1;
	printf("nhap bang cuu chuong ban muon in ra:");
	scanf("%d", &n);
	for(int i=1;i<=10;i++){
		for(int j=1;j<=i;j++){
		tich=j*n;
		}
		printf("\n%d*%d=%d",n,i, tich);
	}
}