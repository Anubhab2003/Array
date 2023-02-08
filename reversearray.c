#include<stdio.h>
int reverse(int arr[],int n){
	int firstval,secondval;
	int i;
	for (i=0;i<n/2;i++){
		firstval=arr[i];
		secondval=arr[n-i-1];
		arr[i]=secondval;
		arr[n-i-1]=firstval;
	}
}
int main(){
	int i,n;
	printf("ENTER THE SIZE OF ARRAY:");
	scanf("%d",&n);
	int arr[n];
	printf("Now ! ENTER THE ELEMENTS of array\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
	printf("The Reverse array is :\n");
	for(i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
}
