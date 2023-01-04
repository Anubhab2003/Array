#include<stdio.h>
int main(){
	int age=22;
	int _age=23;
	int *ptr=&age;
	int *_ptr=&_age;
	printf("Difference : %p\n", ptr-_ptr);
	printf("Comparision : %p\n",ptr==_ptr);
}
