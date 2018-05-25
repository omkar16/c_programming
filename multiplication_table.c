#include <stdio.h>
void main(){
	int number;
	printf("Enter number : ");
	scanf("%d",&number);
	for (int i = 1; i <= 10; ++i)
	{
		printf("%d\n",i*number);
	}
}