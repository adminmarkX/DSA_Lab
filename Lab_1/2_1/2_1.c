#include <stdio.h>
#define ROW 10
#define COL 5

void better(int gradesList[ROW][COL]);

void main(void){

    int grades[ROW][COL];
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            printf("Give the grade for he student %d and test %d :",i,j);
            scanf("%d",&grades[i][j]);
            if(grades[i][0] == 0){
                break;
            }
        }
    }
    better(grades);
}

void better(int gradesList[ROW][COL]) {
    int best = *(*(gradesList)); 

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (*(*(gradesList + i) + j) > best) {
                best = *(*(gradesList + i) + j);
            }
        }
    }

    printf("\nThe best grade was %d\n", best);
}