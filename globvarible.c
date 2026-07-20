#include<stdio.h>
int a[10];
int n ;

void read(){
    int i;
    for(i=0;i<n;i++){
        printf("enter the value a[%d]",i);
        scanf("%d",&a[i]);
    }
}
void display(){
    int i;
    printf("The values in the array are : ");
    for(i=0;i<n;i++){
        printf(" %d",a[i]);}
}
void main(){
int i;
printf("Enter the size of array : ");
scanf("%d",&n);
read();
display();
}
