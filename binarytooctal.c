#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    long num;  
    int  dec = 0, oct = 0, rem = 0, place = 0;  
  
    printf("Enter a Binary Number\n");  
    scanf("%ld", &num);  
  
    printf("\nOctal Equivalent of Binary no %ld is ", num);  
    while(num)  
    {  
        rem = num % 10;  
        dec = dec + rem * pow(2, place);  
        num = num / 10;  
        place++;  
    }  
  
    place = 1;  
    rem   = 0;  
  
    while(dec)  
    {  
        rem   = dec % 8;  
        oct   = oct + rem * place;  
        dec   = dec / 8;  
        place = place * 10;  
    }  
    printf("octal number is %d",oct);
}
