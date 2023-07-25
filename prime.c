#include<stdio.h>
#include<conio.h>
int main(){
	int c=0,n,i;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
		c++;
		
	}
	if(c==2){
		printf("prime number");
	}
	else{
		printf("not a prime number");
	}
}
