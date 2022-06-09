#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){
	int x;
	for(x=1;x<=10;x++){
		if(x<=5){
			continue;
		}
		printf("the number is %d",x);
	}
	
	return 0;
}
