#include <stdio.h>
#define SIZE 5

float avg(float *pin);
void main(void){
    float pin[SIZE],avg_age;
    for(int i=0;i<SIZE;i++){
        printf("Please give a age on %d:",i);
        scanf("%f",&pin[i]);
    }
    printf("\nThe avg age is : %f",avg(pin));
}

float avg(float *spin){
    float avgg =0;
    for(int i=0;i<SIZE;i++){
        avgg += *(spin+i);
    }
    return avgg/SIZE;
}