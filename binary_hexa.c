#include<stdio.h>

void hexa_conversion(int n);

void hexa_conversion(int n){
    int rem = n % 16;
    if(n == 0){
        return;
    }
    hexa_conversion(n/16);
    if(rem < 10)
        printf("%d",rem);
    else
        printf("%c",rem - 10 + 'A');
    
}

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    hexa_conversion(num);
    
    return 0;
}