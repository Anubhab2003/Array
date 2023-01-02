#include<stdio.h>
int main(){
	float price[3];
	printf("Enter the price of three item$:");
	scanf("%f%f%f",&price[0],&price[1],&price[2]);
	printf("%f\n",price[0]+(0.18*price[0]));
	printf("%f\n",price[1]+(0.18*price[1]));
	printf("%f\n",price[2]+(0.18*price[2]));
}


