#include <stdio.h>
#include <conio.h>
int main(){
int a,n,so1,so2,so3,tong,tbc,max,min;
getch();
do{
	printf("nhap chuc nang ban muon chon:");
	printf("\n1:nhap 3 so \n2:tong 3 so \n3:trung binh cong 3 so \n4:so lon nhat \n5:so nho nhat \n6:thoat");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("nhap so thu nhat:");
			scanf("%d", &so1);
			printf("nhap so thu hai:");
			scanf("%d", &so2);
			printf("nhap so thu ba:");
			scanf("%d", &so3);
			break;
		case 2:
			tong=so1+so2+so3;
			printf("%d", tong);
			break;
		case 3:
			tbc=tong/3;
			break;
		case 4:
			if((so1>so2) && (so1>so3)){
				max=so1;
			}
			if((so2>so1) && (so2>so3)){
				max=so2;
			}
			if((so3>so1) && (so3>so2)){
				max=so3;
			}
			printf("%d", max);
			break;
		case 5:
			if((so1<so2) && (so1<so3)){
				min=so1;
			}
			if((so2<so1) && (so2<so3)){
				min=so2;
			}
			if((so3<so1) && (so3<so2)){
				min=so3;
			}
			printf("%d", min);
			break;
		case 6:
			break;
		default:
		printf("khong hop le");	
	}
}while(n!=6);fff
f

return 0;
}