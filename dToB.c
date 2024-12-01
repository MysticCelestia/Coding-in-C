#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number(int* arr,int size){
	int num = 0;
	for(int i = 0; i < 10;i++){
		num = num*10 + arr[i];
	}
	return num;
}
int* convert(int n){
	int *s = (int*)malloc(10 * sizeof(int));
	int i = 0;
	while(n>0){
		s[i] = n%2;
		i++;
		n = n/2;
	}
	return s;
}


int reverse(int a[],int len1){
	int st = 0;
	int len = len1 - 1;
	while(st < len){
		int temp = a[st];
		a[st] = a[len];
		a[len] = temp;
		st++;
		len--;
	}
	int num = number(a,len);
        return num;
}

int main(){
	int n;
	int *s = (int*)malloc(10 * sizeof(int));
	printf("Enter a decimal number: \n");
	scanf("%d",&n);
	int num2;
	s = convert(n);
	num2 = reverse(s,10);
	printf("Its binary number: %d\n",num2);
}

