#include<stdio.h>
#include<stdlib.h>

int main()
{
	float t,e,m,so,sc,avg;
	
	printf("enter english manrks:");
	scanf("%f", &e);
	
	printf("enter telugu manrks:");
	scanf("%f", &t);
		
	printf("enter maths manrks:");
	scanf("%f", &m);
	
	printf("enter social manrks:");
	scanf("%f", &so);
	
	printf("enter science manrks:");
	scanf("%f", &sc);
	
	avg=(e+t+m+so+sc)/5;
	
	printf("your average marks are %.2f",avg);
	
	return 0;
	
}
