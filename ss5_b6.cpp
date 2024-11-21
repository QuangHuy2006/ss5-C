#include <stdio.h>
int main(){
	int so1,so2,tong,hieu,tich,thuong;
	printf("nhap so thu nhat:");
	scanf("%d", &so1);
	printf("nhap so thu hai:");
	scanf("%d", &so2);
	int n;
	printf("nhap lua chon cua ban:");
	printf("\n1:tong hai so \n2:hieu hai so \n3:tich hai so \n4:thuong hai so \n5:thoat\n");
	scanf("%d", &n);
	switch(n){
		case 1:
			tong=so1+so2;
			printf("%d", tong);
			break;
		case 2:
			hieu=so1-so2;
			printf("%d", hieu);
			break;
		case 3:
			tich=so1*so2;
			printf("%d", tich);
			break;
		case 4:
			thuong=so1/so2;
			printf("%d", thuong);
			break;
		case 5:
			break;
		default:
			printf("khong hop le");
			break;
	}
}