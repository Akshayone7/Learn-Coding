#include<stdio.h>
#include <string.h>

int main(){

char s1[100], s2[100],i;

printf("Enter string 1:\n");
scanf("%s", &s1);

printf("Enter string 2:\n");
scanf("%s", &s2);

strcpy((s1 + strlen(s1)), s2);     // copy b-  end of a

printf("%s\n",s1); 
return 0;
}

