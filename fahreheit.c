#include<stdio.h>
void main(){
	float celcius,fahrenheit;
	printf("Enter the Temperature : ");
	scanf("%f",&celcius);
    fahrenheit=((9*celcius)/5)+32;
    printf("Temperature in fahrenheit is %f",fahrenheit);
}