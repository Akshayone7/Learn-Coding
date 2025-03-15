#include <stdio.h>
int main()
{
    int length ,width;
    float area,perimeter;
    
    printf("\nEnter length\n");
    scanf("%d",&length);
    printf("\nEnter width\n");
    scanf("%d",&width);     
    
    area=length * width;       
    perimeter=2*(length + width);
    
    printf("\nArea: %f\n",area);
    printf("\nPerimeter: %f",perimeter);
    
    return 0;
}

