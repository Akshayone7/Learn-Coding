#include<stdio.h>

void find_length(char *input){
    int length = 0;
    while(input[length]!='\0')
    {
        length++;
    }
            printf("Length of a String is: %i", length);
}
int main() {

        char input [20];
        printf("Enter a String\n");
        scanf("%s",&input );
        find_length(input);
        return 0;
}
