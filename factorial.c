#include<stdio.h>

int fact (int n);
int fact(int n){
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

int main(){
    int num;
    printf("Enter a number ");
    scanf("%d", &num);
    int ans = fact(num);
    printf("Factorial is: %d", ans);
 
    return 0;
}