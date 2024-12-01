#include <stdio.h>  

int main() {  
    int num, storeNum, checkNum = 0, r;  
    printf("Enter a number\n");  
    scanf("%d", &num);  
    storeNum = num;  

    while(num != 0) {  
        r = num % 10;  
        checkNum = checkNum + (r*r*r);   
        num = num/10;  
    }  
    
    if(storeNum == checkNum) {  
        printf("%d is an Armstrong number\n", storeNum);  
    }  
    else {  
        printf("%d is not an Armstrong number\n", storeNum);  
    }  
    return 0;  
}
