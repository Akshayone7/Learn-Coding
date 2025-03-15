#include <stdio.h>

// C Program to reverse number
int reverse(int a){
    int rev =0;
    
    while(a!=0){
    int digit = a%10 ; //last digit logic
    rev = rev * 10 + digit; //update rev number
    a = a / 10; //remove last 
    }
        return rev;
}


int main() {
int n, rev_num;

    printf("Enter Number");
    scanf("%d", &n);
    rev_num = reverse(n);
    printf("The Reverse Number of: %d is = %d", n,rev_num);
       return 0;
}


