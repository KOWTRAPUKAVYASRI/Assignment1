#include<stdio.h>

int main(){
	int n,r,base=1,b=0;
	printf("enter n");
	scanf("%d",&n);
	while(n>0){
		r=n%2;
		b=b+r*base;
		n=n/2;
		base=base*10;
		
   }
	printf("binary number. %d",b);

}
