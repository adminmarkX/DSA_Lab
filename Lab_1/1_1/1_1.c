#include <stdio.h>
#define BITS 32
void main(void){

    int x;
    int arr[BITS];

    scanf("%d",&x);
    int i=0;
    while(x>0){
        arr[i] = x%2;
        x = x/2;
        i++;
    }

    for(int j=0;j<i+1;j++){
        printf("%d",arr[i-j]);
    }

}