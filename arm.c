#include<stdio.h>
#include<math.h>
int main() {
   int i,n1,n2, digitSum, temp, remainderNum, digitNum ;
  printf("enter n1 and n2");
  scanf("%d%d",&n1,&n2);
  
   printf("Armstrong Numbers between n1 and n2 are\n");
   for( i = n1; i <= n2; i++) {
      temp = i;
      digitNum = 0;
      while (temp != 0) {
         digitNum++;
         temp = temp/10;
      }
      temp = i;
      digitSum = 0;
      while (temp != 0) {
         remainderNum = temp%10;
         digitSum = digitSum + pow(remainderNum, digitNum);
         temp = temp/10;
      }
      if (i == digitSum)
      printf("%d\n",i );
   }
   return 0;
}




