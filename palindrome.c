#include <stdio.h>

int main(){
	int num,r,storeNum,checkNum = 0;
	printf("Enter a number\n");
	scanf("%d",&num);
	storeNum = num;

	while(num!=0){
		r = num % 10;
		checkNum = checkNum*10 + r;
		num = num/10;
	}

	if(checkNum == storeNum){
		printf("%d is a palindrome number\n",storeNum);
	}
	else{
		printf("%d is a not palindrome number\n",storeNum);
	}
}
