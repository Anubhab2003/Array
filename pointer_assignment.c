#include<stdio.h>
int main(){
	int age=22;
	int *ptr=&age;
	printf("%p",ptr);
	ptr++;
	printf("%p",ptr);

