#include<stdio.h>
int main()
{
	int i,n,count=0,k;
	printf("enter the no of elements of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the valuef k:");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(k==a[i]){
			count=count+1;
		}
	}
	printf("%d occurs %d times",k,count);
}
