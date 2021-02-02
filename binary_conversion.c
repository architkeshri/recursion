#include<stdio.h>

void binary_conversion(int n);

void binary_conversion(int n){
    if(n == 0){
        return;
    }
    binary_conversion(n/2);
    printf("%d", n % 2);
}

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    binary_conversion(num);
    
    return 0;
}