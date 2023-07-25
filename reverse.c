#include<stdio.h>
#include<conio.h>
int main() {
int i, n, rev=0, r;
 printf("enter n");
  scanf("%d",&n);
  
   while(n>0){
   
   r=n%10;
   rev=rev*10+r;
   n=n/10;
}
	  
      printf(" reverse of a number =%d ",rev);
 
}




