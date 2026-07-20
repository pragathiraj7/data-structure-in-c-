#include <stdio.h>
int a[10],n,c=0;
void find(int e,int n){
	for(int i=0;i<n;i++){
		if(a[i]==e){
			printf("Element %d found at index %d\n",e,i);
			c++;
		}
	}
	if(c==0)
		printf("Element not found!");
	else
		printf("\nTotal occurences = %d",c);
}
void main(){
	int e;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to be searched: ");
	scanf("%d",&e);
	find(e,n);
}
