#include <stdio.h>
#include <stdlib.h>
int main()
{
	char m,p,c;
	printf("enter true or false (t/f) fever,cold,headace :");
	scanf(" %c %c %c",&m,&p,&c);
	if((m=='t')||(p=='t')||(c=='t')){
		printf("HE IS SICK");
	}else{
		printf("HE IS NOT SICK");
	}
	return 0;
}
