#include<stdio.h>

int digit_sum(int n);

int digit_sum(int n){
    if(n == 0)
        return 0;
    return n%10 + digit_sum(n/10);
}

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    int ans = digit_sum(num);
    printf("sum of digit = %d",ans);

    return 0;
}