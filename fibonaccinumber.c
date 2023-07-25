#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,a=0,b=1,c;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=b;
		b=c;
		c=a+b;
		
	}
	printf("%d",a);
}
