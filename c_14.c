#include<stdio.h>
#include<stdlib.h>
int main(){
	float marks;
	printf("Enter your marks:\n");
	scanf("%f",&marks);
	(marks>=35) ? printf("Student passed") : printf("student failed");
	return 0;
}
