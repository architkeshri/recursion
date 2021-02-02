#include<stdio.h>

int sum(int n);

int sum(int n){
    if(n == 1)
        return 1;
    return n + sum(n-1);
}


int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    int ans = sum(num);
    printf("sum = %d",ans);
    return 0;
}