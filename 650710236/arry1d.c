#include<stdio.h>
void main () {
    int n, max=0;
    scanf("%d", &n);
    int a[n];
    for( int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if (a[i] > max){
            max = a[i];
    }
        }for(int i=0; i<max; i++){
            for(int j=0; j<n; j++){
                if(i>=max-a[j]){
                    printf("*");
                }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
