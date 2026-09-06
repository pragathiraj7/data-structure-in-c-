#include<stdio.h>
void main(){
    int a[10],b[10],c[10];
    int n, i;
     printf("enter degree");
     scanf("%d",&n);
     printf("enter first polynomial\n");
     for(i=0;i<=n;i++)
        scanf("%d",&a[i]);
    printf("enter second polynomial\n");
     for(i=0;i<=n;i++)
        scanf("%d",&b[i]);
    for (i=0;i<=n;i++)
        c[i]=a[i]-b[i];
    printf("subtraction of polynomials:\n");
    for(i=n;i>=0;i--)
        printf("%dx^%d \t",c[i],i);
}