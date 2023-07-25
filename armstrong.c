#include<stdio.h>
#include<math.h>
int main() {
   int i,n, sum=0, r,temp, count=0;
   int t;
   t=n;
  
  printf("enter n");
  scanf("%d",&n);
   temp=n;

   while(n>0){
   
   r=n%10;
   count=count+1;
   n=n/10;
}
t=n;
while(n>0){
r=t%10;
sum=sum+pow(r,count);
t=t/10;
}
if (sum== t){
	  
      printf(" armstrong number ");
  }
  else
  {
  	printf("not an armstromg number");
  }
}




