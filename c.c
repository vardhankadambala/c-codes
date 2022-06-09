#include<stdio.h>
#include<stdlib.h>
int main(){
	
/*	char text[10]="I am a boy";
	text[7]='d';
	printf(" %s\n" ,text);
	char food[]="curd rice";
	printf("I want to eat %s\n",food);
	strcpy(food,"biriyani");
	printf("I want to eat %s\n",food);*/
	char *st_name[]={"raj","ram","remo","rambo","ravi"};
	printf("the best student award goes to %s\n",st_name[3]);
	st_name[2]="raju";
	printf("the best student award goes to %s\n",st_name[2]);
	return 0;
}
