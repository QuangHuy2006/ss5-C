#include <stdio.h>
#include <math.h>

int main(){
	int n,remainder;
	scanf("%d", &n);
	int reversed;
	while(n!=0){
		int remain=n%10;
		reversed=reversed*10+remain;
		n/=10;
	}
	if(reversed>0){
	while(reversed>=1){
	remainder=reversed%10;
	reversed/=10;
	printf("%d ", remainder);
	}
}
	else{
	while(reversed<=-1){
		remainder=reversed%10;
		reversed/=10;
		printf("%d ", remainder*-1);
	}
}
}

	
