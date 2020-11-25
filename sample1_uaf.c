#include<stdio.h>
#include<stdlib.h>

typedef struct{
char name[0x10];
int score;
}student;



int main(void){

student * ptr1;
student * ptr2;

ptr1 = (char *)malloc(0x20);
printf("input name (max 10) : ");
scanf("%10s",ptr1->name);
printf("input score : ");
scanf("%d",&ptr1->score);

printf("heap_addr : 0x%x\n",ptr1);
printf("name : %s\n",ptr1->name);
printf("score : %d\n",ptr1->score);

free(ptr1);

ptr2 = (char *)malloc(0x20);

printf("input name (max 10) : ");
scanf("%10s",ptr2->name);

printf("heap_addr : 0x%x\n",ptr2);
printf("name : %s\n",ptr2->name);
printf("score : %d\n",ptr2->score);

}
