#include<stdio.h>

int countDivisior(int num, int i){
    static int sum = 0;
    if(i > num/2)
        return sum;
    if(num % i == 0){
        printf("%d ",i);
        sum += i;
    }
    countDivisior(num, i+1);
}

int main(){
    int num;
    printf("enter the number ");
    scanf("%d", &num);
    
    printf("\nsum = %d",countDivisior(num,1));
    
    return 0;
}