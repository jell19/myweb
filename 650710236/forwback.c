#include<stdio.h>
 void main () {
    int n,m;
    scanf("%d", &n);

    int a[n];
    for (int i=0; i<n; i++){
    scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    if (m>0){
    for (int i=0; i<n; i++){
        printf("%d", a[i]+m);
    }
    }
    if (m<0){
    for (int i=n-1; i>=0; i--){
        printf("%d", a[i]+m);
 }
    }
 }
