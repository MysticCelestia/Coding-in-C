#include <stdio.h>
int main(){
	int a,b;
	printf("Enter number in 'a'\n");
	scanf("%d",&a);
	printf("Enter number in 'b'\n");
	scanf("%d",&b);
	printf("\n");
        printf("Before swapping\n");
        printf("a = %d ; b = %d\n ",a,b);

	a = a + b;                    
	b = a - b;
	a = a - b;  
	
	printf("After swapping\n");
        printf("a = %d ; b = %d\n",a,b);

}
