#include <stdio.h>

int main(){
	int numCheck;
	printf("Enter a number to be checked\n");
	scanf("%d",&numCheck);

	if(numCheck%2==0){
		printf("%d is even number\n",numCheck);
	}
	else{
		printf("%d is odd number\n",numCheck);
	}
}
