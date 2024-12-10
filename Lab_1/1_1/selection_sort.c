#include <stdio.h>
#define SIZE 10

void sort(int *array);

void main(void){

    int arr[SIZE];
    for(int i=0;i<SIZE;i++){
        printf("Please give the %d numb",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }

    sort(arr);
    for(int i=0;i<SIZE;i++){
        printf("\narr[%d] = %d",i,arr[i]);
    }
    
}

void sort(int *array){
    int temp;
    for(int i=0;i<SIZE;i++){
        for(int j=i+1;j<SIZE;j++){
            if(array[i] > array[j]){
                temp = *(array+j);
                *(array+j) = *(array+i);
                *(array+i) = temp;
            }
        }
    }
}