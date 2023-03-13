#include<stdio.h>
void main () {
    int size = 8;
    int num[size];
    for (int i=0; i<size; i++){
        scanf("%d", &num[i]);
    }
    double sum=0;
    for (int i=0; i<size; i++){
        sum += num[i];
    }
    double avg = sum/size;
    sum=0;
    for(int i=0; i<size; i++){
        sum += (num[i]-avg)*(num[i]-avg);
    }
    double var = sum/(size-1);
    printf("%.2f %.2f", avg, var);
}
