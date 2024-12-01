#include <stdio.h>

int main(){
	int num,c ;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	for(int i = 2;i<=num;i++){
		if(num%i == 0){
			c++;
		}
	}
	if(c==1){
		printf("%d is prime\n",num);
	}
	else{
		printf("%d is not prime\n",num);
	}
}
