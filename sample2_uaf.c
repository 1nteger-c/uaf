#include<stdio.h>
#include<stdlib.h>


typedef struct{
	char name[0x20];
	void (*print)(void*);
}student;

typedef struct{
	char data[0x40];
}data;

void printName(student *s){
	printf("name : %s\n",s->name);
}


void win(){
	printf("YOU KNOW A UAF");
}


int main(void){

	student *s1;
	data *d1;
	s1 = (char *)malloc(0x50);
	printf("Input name :");
	scanf("%31s",s1->name);
	s1->print = (void*)printName;

	s1->print(s1);

	free(s1);

	d1 = (char *)malloc(0x50);
	printf("Input Data : ");
	scanf("%63s",d1->data);

	s1->print(s1);
	return 0;
}
