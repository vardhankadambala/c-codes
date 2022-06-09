#include<stdio.h>
#include<stdlib.h>
int main(){
	int x=5,y=10,z=0;
	z=++x * y;
	printf("\n %d \n",z);
	
	x=5,y=10,z=0;
	z=x++ * y;
	printf("\n %d \n",z);
	
	
	return 0;
}
