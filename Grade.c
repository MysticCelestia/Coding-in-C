#include <stdio.h>

int main(){
	int marks;
	printf("Enter marks of the subject\n");
	scanf("%d",&marks);
	if(marks>=90 && marks<=100){
		printf("A+\n");
	}
	else if(marks>=80 && marks<90){
                printf("A\n");
        }
	else if(marks>=70 && marks<80){
                printf("B\n");
        }
	else if(marks>=60 && marks<70){
                printf("C\n");
        }
	else if(marks>=50 && marks<60){
                printf("D\n");
        }
	else{
                printf("F\n");
        }
}
