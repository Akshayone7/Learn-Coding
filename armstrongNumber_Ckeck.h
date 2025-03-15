#include <stdio.h>

/*
Logic
find no. of digit
store to original num
sum of each digit with power
*/
int main() {
    int num, temp, r, sum = 0, x = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num != 0) {
        num /= 10;
        ++x;
    }
    num = temp;
 
 // sum of each digit raised to the power of the number of digits
    while (num > 0) {
        r = num % 10;
        int power = 1;
        for (int i = 0; i < x; ++i) {
            power *= r;
        }
        sum += power;
        num /= 10;
    }

    if (sum == temp) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}
