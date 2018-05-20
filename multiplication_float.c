#include<stdio.h>

void main() {
	float a,b,c;
	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("Enter the second number: ");
    scanf("%f", &b);
    c=a*b;
    printf("%5.3f",c);
}