#include <stdio.h>
#include <stdlib.h>
int main(){
	int yourclass;
	printf("enter your class:");
	scanf("%d",&yourclass);
	if(yourclass>=6){
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
	}
	else{
		printf("you cannot use this application");
	}
	return 0;

}
