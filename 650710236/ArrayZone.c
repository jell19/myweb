#include<stdio.h>
void main () {
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    int num[rows][cols];

    for (int r=0; r<rows; r++){
       for(int c=0; c<cols; c++){
        scanf("%d", &num[r][c]);
       }
       printf("\n");
    }
    int sum=0;
    for (int r=0; r<rows/2; r++){
        for (int c=0; c<cols/2; c++){
           // printf("%d ", num[r][c]);
            sum += num [r][c];
        }
        //printf("\n");
    }
    int sum2=0;
    for (int r=0; r<rows/2; r++){
        for (int c=0; c<cols/2; c++){
            //printf("%d ", num[r][c]);
            sum2 += num [r][c];
        }
        //printf("\n");
    }
    int sum3=0;
    for (int r=0; r<rows/2; r++){
        for (int c=0; c<cols/2; c++){
            //printf("%d ", num[r][c]);
            sum3 += num [r][c];
        }
        //printf("\n");
    }
    int sum4=0;
    for (int r=0; r<rows/2; r++){
        for (int c=0; c<cols/2; c++){
          //  printf("%d ", num[r][c]);
            sum4 += num [r][c];
        }
       // printf("\n");
    }
    printf("%d %d\n%d %d", sum, sum2, sum3 ,sum4);
}
