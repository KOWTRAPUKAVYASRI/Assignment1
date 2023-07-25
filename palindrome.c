#include<stdio.h>
#include<conio.h>
int main() {
int n,rev=0,n1,r;

 printf("enter n");
  scanf("%d",&n);
   n1=n;
   while(n>0){
   
   r=n%10;
   rev=rev*10+r;
   n=n/10;
}
if(n1==rev){
	  
      printf(" palindrome number ",n);
 
}
else{
	printf("not a palindrome");
}
}




