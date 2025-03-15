/*C Program to compute the area and perimeter of a rectangle*/
#include <stdio.h>

int main()
{
    int length ,width;
    float area,perimeter;
    
    printf("enter length\n");
    scanf("%d",&length);
    printf("enter width\n");
    scanf("%d",&width);     
    
    area=length * width;       
    perimeter=2*(length + width);
    
    printf("Area: %f\n",area);
    printf("Perimeter: %f",perimeter);
    
    return 0;
}

