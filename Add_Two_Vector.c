#include <stdio.h>
int main()
{
    int vector1[] = {1,2,3};
    int vector2[] = {4,5,6};
    int vector3[] = {0,0,0};
    
        printf("Vector 1:\n");
    for(int i=0; i<3; i++){
        printf("%d", vector1[i]);
    }
        printf("\nVector 2:\n");
        for(int i=0; i<3; i++){
        printf(" %d", vector2[i]);
    }
    for(int i=0; i<3; i++){
        vector3[i] = vector1[i] + vector2[i];
    }
    
    printf("\nAddition of Two Vectors is:\n");
    
    for(int i=0; i<3; i++){
    printf("%d", vector3[i]);
    }
    return 0;
}

