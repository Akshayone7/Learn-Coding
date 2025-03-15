#include <stdio.h>

int main()
{
	int num, power, res=1; 
	
	printf("Enter a number: ");
	scanf("%d", &num); 
	printf("Enter the power");
	scanf("%d", &power); 
	

	for(int i=0; i<power; i++)
	res = res * num;

	printf("Power %d\n", res);
}