#include<stdio.h>
int main(){
	int age=22;
	int _age=23;
	int *ptr=&age;
	int *_ptr=&_age;
	printf("Difference : %d\n", _ptr-ptr);
	printf("Comparision : %d\n",ptr==_ptr);
}
