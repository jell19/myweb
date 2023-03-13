#include<stdio.h>
void main () {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int r, c;
    scanf("%d%d", &r, &c);
    for (int i=0; i<n; i+=r){
        for (int j=0; j<n; j+=c){
            printf ("%d", a[i][j]);
        }
        printf("\n");
    }

}
