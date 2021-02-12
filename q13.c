#include<stdio.h>

int sum(int num){
    if(num == 0)
        return 0;
    return num + sum(num-1);
}

int main(){
    printf("enter the number: ");
    int num;
    scanf("%d",&num);
    printf("the sum of first %d natural number is= %d ", num,sum(num));
}