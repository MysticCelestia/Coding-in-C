#include <stdio.h>

void swap(int *a,int *b);
void swap(int *a,int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main(){
	int a,b;
	printf("Enter 2 numbers a and b:\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping:\n");
	printf("a = %d b = %d\n",a,b);
	swap(&a,&b);
	printf("After swapping:\n");
        printf("a = %d b = %d\n",a,b);
	return 0;
}
