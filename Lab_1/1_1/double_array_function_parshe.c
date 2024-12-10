#include <stdio.h>
#define SIZE 2

// returns max
int max(int (*mlist)[3],int mmun);

void main(void){

    int list[SIZE][3];
    int k,meg,ak;

    for(k=0;k<SIZE;k++){
        for(int h=0;h<3;h++){
            scanf("%d",&list[k][h]);
        }
    }
    meg = max (list,k);
    printf("The max number of the array is %d",meg);
}

int max(int (*mlist)[3],int mmun){
    int mmeg,mk;

    mmeg = *(*(mlist+0)+0);
       for(int k=0;k<SIZE;k++){
        for(int h=0;h<3;h++){
            if(mmeg < mlist[k][h]){
                mmeg = *(*(mlist+k)+h);
            }
        }
    }
    return mmeg;
}
