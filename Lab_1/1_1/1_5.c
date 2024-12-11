#include <stdio.h>
#define SIZE 2

void input(int *list,int *list2);
void addarray(int *list,int *list2);
void display(int list[]);

void main(void){

    int list[SIZE],list2[SIZE];

    input(list,list2);
    addarray(list,list2);
    display(list);
}

void input(int *list,int *list2){
    for(int i=0;i<SIZE;i++){
        printf("Please give a number for list[%d]:",i);
        scanf("%d",(list+i));
        printf("Please give a number for list2[%d]:",i);
        scanf("%d",(list2+i));
    }
}
void addarray(int *list,int *list2){
    printf("adding...\n");
    for(int i=0;i<SIZE;i++){
        *(list+i) = *(list+i) + *(list2+i);
    }
}
void display(int list[]){
    for(int i=0;i<SIZE;i++){
        printf("The number for list[%d] = :%d\n",i,list[i]);
    }
}
