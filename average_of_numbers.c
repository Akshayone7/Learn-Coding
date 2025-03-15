// Online C compiler to run C program online
#include <stdio.h>

int main() {
char ch;

printf("Enter a Character");
scanf("%c", &ch);

if (ch>='0' || ch <='9'){
    printf("Entered Character is Number");
}
else if(ch<='a' || ch<='z' || ch>='A' || ch<='Z')
    printf("Entered Character is an Alphabet");
    return 0 ;
}