#include<stdio.h>
#include<stdlib.h>
int main(){
	int f;
	printf("Enter no of friends:\n");
	scanf("%d",&f);
	printf("I have %d friend%s", f, (f!=1) ? "s":"");
	return 0;
}
