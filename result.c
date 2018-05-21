#include<stdio.h>

void main() {
    int physics, chemistry, math, biology, english, itech, total, percentage;
    char name[50];
    printf("Enter your name : ");
    scanf("%s",name);
    printf("Physics     : ");
    scanf("%d",&physics);
    printf("Chemistry   : ");
    scanf("%d",&chemistry);
    printf("Maths       : ");
    scanf("%d",&math);
    printf("Biology     : ");
    scanf("%d",&biology);
    printf("English     : ");
    scanf("%d",&english);
    printf("itech       : ");
    scanf("%d",&itech);
    total = (physics + chemistry + math + biology + english + itech);
    percentage = total / 6;
    printf("Your total marks is %d \n",total);
    printf("Percentage of %s is : %d",name, percentage);
}