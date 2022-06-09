#include <stdio.h>
#include <stdlib.h>


int main() {
	char person_1[20];
	char person_2[20];1
	int m_f;
	printf("enter friend 1 name:\n");
	scanf("%s,",person_1);
	printf("enter friend 2 name:\n");
	scanf("%s,",person_2);
	printf("no of mutual friends the have:");
	scanf("%d",&m_f);
	
	printf("%s and %s are best friends and they have %d mutual friends",person_1,person_2,m_f);
	return 0;
}
