#include <stdio.h>

int main(){
	int num;
	printf("It is raining or not: Enter 1 for YES and 2 for NO :\n");
	scanf("%d",&num);
	
	if(num == 1)
	{
		printf("It is raining.");}
	else if( num == 2)
	{	printf("it is not raining.");
		}
	else
	{	printf("Invalid input");
			}		
	return 0;
}
