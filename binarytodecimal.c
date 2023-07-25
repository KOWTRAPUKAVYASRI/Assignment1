#include<stdio.h>

int main(){
	int n,r,base=1,d=0;
	printf("enter n");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		d=d+r*base;
	    n=n/10;
		base=base*2;	
   }
	printf("decimal number. %d",d);
}
