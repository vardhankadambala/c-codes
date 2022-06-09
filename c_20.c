#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){
	int r,c,n1,n2;
	printf("no of rows do you want");
	scanf("%d",&n1);
	printf("no of columns do you want");
	scanf("%d",&n2);
	
	
	for(r=1;r<=n1;r++){
		for(c=1;c<=n2;c++){
			printf("%d ",c);
			
		}
		printf("\n");
	}
	
	return 0;
}
