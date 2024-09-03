#include<stdio.h>

int main(){
	int num1;
	int num2;
	int temp;
	printf("Enter number of your choice: %d\n",num1);
	scanf("%d",&num1);
	printf("Enter number of your choice: %d\n", num2);
	scanf("%d",&num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("number1 : %d",num1);
	printf("number2 : %d",num2);
	return 0;
	
}
