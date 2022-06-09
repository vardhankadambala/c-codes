#include <stdio.h>
#include <stdlib.h>
int main()
{
	float m,p,c,avg,total;
	printf("enter you maths,physics,chemistry marks:");
	scanf("%f%f%f",&m,&p,&c);
	total=m+p+c;
	printf("total marks are:%.2f\n",total);
	avg=(m+p+c)/3;
	printf("Average marks are:%.2f\n",avg);
	if(avg>=90){
		printf("A grade");
	}
	else if(avg>=80){
		printf("B grade");
	}
	else if(avg>=70){
		printf("C grade");
	}
	else if(avg>=60){
		printf("D grade");
	}
	else if(avg>=50){
		printf("B grade");
	}
	else{
		printf("student failed");
	}
	return 0;
}
