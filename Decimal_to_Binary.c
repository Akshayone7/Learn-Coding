// Online C compiler to run C program online
#include <stdio.h>

int main() {
int number, j=0;
int binaryNum[100];

printf("\nEnter a Decimal Number: ");
scanf("%d", &number);


while(number>0){
binaryNum [j] = number % 2; // Divide by 2 and Store reminder into                                array

number = number / 2;  // Divide number by 2
j++;
}

 /*Iterate above two steps till the value your receive, as a result, exceeds zero. */
 
  for(int i = j-1; i>=0; i--){      
        printf(" %d", binaryNum[i]);
    }
    return 0 ;
}

/*
Logic

Enter a Decimal Number

Make an Array for Binary Number storing

Divide Number by 2 adn 
Store the remainder within the binarynum array

Divides decimal  by 2 to obtain the next bit. 

Subsequently, it increments the index i [binaryarray index++]
 to get the next position within the array.
 The process of decimal to binary in C using array continues until decinum becomes zero.

 to Obtain binary Lastly iterate reverse 
 Loop, i = binaryindex -1 (Last position); i>=0; i--
 print binarynum[i]
*/