#include <stdio.h>
 
void main()
{
    int  num, binaryno, decimalno=1, base = 1,mod;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); /* maximum five digits */
    binaryno = num;
    while (num > 0)
    {
        mod = num % 10;
        decimalno = decimalno + mod * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binaryno);
    printf("Its decimal equivalent is = %d \n", decimalno);
}