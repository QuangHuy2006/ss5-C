#include <stdio.h>
int main(){
	int n=0,tich=1;
	printf("=========");
for(int o=1;o<=9;o++){
	n++;
		for(int i=1;i<=10;i++){
			for(int j=1;j<=i;j++){
				tich=j*n;
			}
			printf("\n%d*%d=%d", n, i, tich);
		}
		printf("\n=========");
	}
}