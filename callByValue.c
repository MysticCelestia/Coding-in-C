#include <stdio.h>
int fact(int n);
int fact(int n){
	int s = 1;
	for(int i = 1;i<=n;i++){
		s = s * i;
	}
	return s;
}

int main(){
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Factorial of %d is %d\n",n,fact(n));
}
