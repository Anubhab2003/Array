#include<stdio.h>
//CODE TO JUST ENTER THE MARKS OF THREE SUBJECT IN AN ARRAY.
int main(){
	int marks[3];
	printf("Enter Physics:");
	scanf("%d",&marks[0]);
	printf("Enter Maths:");
	scanf("%d",&marks[1]);
	printf("Enter Chemistry:");
	scanf("%d",&marks[2]);


	printf("phy=%d,maths=%d,chemistry=%d",marks[0],marks[1],marks[2]);
}
