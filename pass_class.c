#include<stdio.h>
void main() {
	int marks;
	for (int i = 0; i < 10; ++i)
	{
		printf("Enter the marks of student : ");
	    scanf("%d", &marks);
	    if (marks >=85){
	    	printf("You have first class with distinction\n ");
	    } else if (marks >= 75){
	    	printf("You have first class\n ");
	    } else if (marks >= 75){
	    	printf("You have first class\n ");
	    } else if (marks >= 60){
	    	printf("You have higher second class\n ");
	    } else if (marks >= 50){
	    	printf("You have second class\n ");
	    } else if (marks >= 35){
	    	printf("You have pass class\n ");
	    } else {
	    	printf("You are failed!\n ");
	    }
	}
}