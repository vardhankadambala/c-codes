#include<stdio.h>
#include<stdlib.h>

int main(){
	float a;
	int day=1,rate,n;
	printf("Enter the amount \t");
	scanf("%f",&a);
	printf("\n Enter the rate \t");
	scanf("%d",&rate);
	printf("\n Enter total no of days \t");
	scanf("%d",&n);
	
	while(day <= n)
	{
		printf("day %d:amount is: %.2f \n",day,a);
		a=a*rate;
		day++;
	}
	return 0;
}
