#include<stdio.h>

void main() {
	int a,b,c,d,e,f,g,h;
	printf("Omkar Bhagwat marks");
	printf("Physics( /100): ");
	scanf("%d",&a);
	printf("Chemistry( /100): ");
	scanf("%d",&b);
	printf("Maths( /100): ");
	scanf("%d",&c);
	printf("Biology( /100): ");
	scanf("%d",&d);
	printf("English( /100): ");
	scanf("%d",&e);
	printf("IT( /100): ");
	scanf("%d",&f);
    g=a+b+c+d+e+f;
	printf("Total %d",g);
	h=(a+b+c+d+e+f)/6;
	printf("Percentage %d",h);
}