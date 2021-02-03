#include<stdio.h>

void prime_factor(int n);

void prime_factor(int n){
    int i = 2;
    if(n == 1)
        return;
    while(n % i != 0){
        i++;
    }
    printf("%d ",i);
    prime_factor(n / i);
}
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    prime_factor(num);
    return 0;
}