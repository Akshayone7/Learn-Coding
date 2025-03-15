#include <stdio.h>

int main() {
int number, ex;
int power = 1;

    printf("Enter Number");
    scanf("%d", &number);

    printf("Enter a Power");
    scanf("%d", &ex);
    
    if(ex == 0){
        return 1;
    }
    else if(ex>0){
        for(int i=0; i<ex; i++){
        power *= number;
    }
  
    }
    printf("The Poweris: %d", power);
     return 0;
}


