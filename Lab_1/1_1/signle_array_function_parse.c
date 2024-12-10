#include <stdio.h>
#define SIZE 10

// returns max
int max(int *mlist,int mmun);

void main(void){

    int list[SIZE];
    int k,meg,ak;

    for(k=0;k<SIZE;k++){
        scanf("%d",&ak);
        if(ak == 0)break;
        if(ak !=0 ) list[k] == ak;
    }
    meg = max (list,k);
    printf("The max number of the array is %d",meg);
}

int max(int *mlist,int mmun){
    int mmeg,mk;

    mmeg = *mlist;
        for(mk=1;mk<mmun;mk++){
            if(mmeg< *(mlist+mk)){
                mmeg = *(mlist+mk);
            }
    }
    return mmeg;
}
