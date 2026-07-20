#include<stdio.h>
 void main(){
    int a[5],i,n;
    printf("enter the elements of array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the a[%d] element",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
 

    
 }