#include <stdio.h>
#define ROW 2
#define COL 4
void main(void){

    int list[ROW][COL];

    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            list[i][j] = i+j;
        }
    }
    for(int i=0;i<ROW;i++){
       printf("mat + %d = pointer/memory = %p and value = %p and the number = %d\n",i,(list+i),*(list+i),*(*(list+i)+0));
    }

}
