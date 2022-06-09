#include<stdio.h>
#include<stdlib.h>

int main(){
	float tmarks;
	float marks=0;
	float totalsub=0;
	float avg=0;
	
	printf("enter 0 to stop the process\n");
	do{
		printf("Total subjects : %.0f\t Total marks: %.2f \t  Average : %.2f\n",totalsub,marks,tmarks);
		printf("enter the mark");
		scanf("%f",&marks);
		totalsub++;
		tmarks+= marks;
		avg = tmarks/totalsub;
		
	}
	while(marks !=0);
	return 0;
}
