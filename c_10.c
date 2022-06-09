#include <stdio.h>
#include <stdlib.h>
int main()
{
	int your_age;
	char gen;
	printf("enter your age:");
	scanf("%d",&your_age);
	
	printf("enter your gender(m/f):");
	scanf(" %c", &gen);
	
	if(gen == 'm'){
		printf("hello sir, ");
	}else{
		printf("hello madam, ");
	}
	
	
	if(your_age>=18){
		printf("you can enter the website.");
	}
	else{
		printf("you are too young to enter.");
	}
	
	return 0;
}
