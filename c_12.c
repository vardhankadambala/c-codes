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
	if((m>=35)&&(p>=35)&&(c>=35)){
		printf("STUDENT PASSED ALL TESTS");
	}else{
		printf("STUDENT FAILED");
	}
	return 0;
}
