#include<stdio.h>
#include<stdlib.h>

int main()
{
	float f_d =100000;
	float rate=1.07;
	
	f_d *=rate;
	printf("total amount in first year is: %.2f\n ",f_d);
	
	f_d *=rate;
	printf("total amount in second year is: %.2f\n ",f_d);
	f_d *=rate;
	
	printf("total amount in third year is: %.2f\n ",f_d);
	f_d *=rate;
	
	printf("total amount in fourth year is: %.2f\n ",f_d);
	return 0;
	
}
