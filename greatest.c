#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter numbers a,b,c\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	if(a>b && a>c){
		printf("a is the greatest among the other numbers\n");
	}
	else if(b>a && b>c){
		printf("b is the greatest among the other numbers\n");
	}
	else{
		printf("c is the greatest among the other numbers\n");
	}
}
