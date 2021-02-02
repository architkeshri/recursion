#include<stdio.h>
void reverse_order(int n);

void reverse_order(int n){
    if(n == 0)
        return ;
    printf("%d",n % 10);
    reverse_order(n/10);
    
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    reverse_order(num);

    return 0;
}