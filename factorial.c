#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fact = 1;
    printf("Enter the Number: ");
    scanf("%d", &num);
    
    printf("\nEntered Number is : %d", num);

while(num>0){
    fact = fact*num;
    num--;
}
printf("\nThe Factorial is: %d", fact);
    return 0;
}