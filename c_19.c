#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){
	int x,y,z,n;
	printf("which table you want to print");
	scanf("%d",&x);
	printf("up to which number you want to print");
	scanf("%d",&n);
	for(y=1;y<=n;y++){
		z=x*y;
		printf("%d * %d = %d\n",x,y,z);
	}
	
	
	return 0;
}
