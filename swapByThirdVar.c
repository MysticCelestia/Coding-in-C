#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter number in 'a'\n");
	scanf("%d",&a);
	printf("Enter number in 'b'\n");
        scanf("%d",&b);
	printf("\n");
	printf("Before swapping\n");
	printf("a = %d ; b = %d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("After swapping\n");
        printf("a = %d ; b = %d\n",a,b);
}
