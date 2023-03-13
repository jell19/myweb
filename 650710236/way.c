#include<stdio.h>
void main () {
    int row, col, n;
    scanf("%d%d%d", &row, &col, &n);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            a[i][j]=0;
        }
    }
    int x, y, count=0;
    for(int i=0; i<n; i++){
        scanf("%d%d", &x, &y);
        count++;
        a[x-1][y-1]=count;

    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
