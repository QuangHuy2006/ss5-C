#include <stdio.h>
#include <math.h>
int main(){
int a,b,ucln;
printf("nhap so a:");
scanf("%d", &a);
printf("nhap so b:");
scanf("%d", &b);
if(a==b){
	ucln=a;
}
if(a>b){
	ucln=a-b;
}
if(a<b) {
ucln=b-a;
}

printf("ucln la %d", ucln);

}

